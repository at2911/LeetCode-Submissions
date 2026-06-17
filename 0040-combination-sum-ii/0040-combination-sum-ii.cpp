class Solution {
public:
    vector<vector<int>> ans;
    void solve(int ind, vector<int>& temp, vector<int>& candidates, int target) {
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        for(int i=ind; i<candidates.size(); i++) {
            if(i >ind && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;
            temp.push_back(candidates[i]);
            solve(i + 1, temp, candidates, target - candidates[i]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        solve(0, temp, candidates, target);
        return ans;
    }
};