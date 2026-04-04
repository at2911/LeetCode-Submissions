class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            int x=nums[i];
            int y=nums[i+1];
            ans.push_back(y);
            ans.push_back(x);
        }
        return ans;
        
    }
};