class Solution {
public:
    void sub(int ind,vector<int>&nums,vector<int>temp,vector<vector<int>>&sol,set<vector<int>>&s){
        if(ind==nums.size()){
            if(!s.count(temp)){
                s.insert(temp);
                sol.push_back(temp);
            }
            return;
        }
        temp.push_back(nums[ind]);
        sub(ind+1,nums,temp,sol,s);
        temp.pop_back();
        sub(ind+1,nums,temp,sol,s);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>sol;
        vector<int>temp;
        sub(0,nums,temp,sol,s);
        return sol;

    }
};