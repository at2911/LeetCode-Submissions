class Solution {
public:
    void solve(vector<int>&nums, vector<int> op,int ind,vector<vector<int>>&ans){
        if(ind>=nums.size()){
            ans.push_back(op);
            return;
        }
        solve(nums,op,ind+1,ans);
        int ele=nums[ind];
        op.push_back(ele);
        solve(nums,op,ind+1,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
       vector<int>op;
       int ind=0;
       solve(nums,op,ind,ans);
       return ans;
    }
};