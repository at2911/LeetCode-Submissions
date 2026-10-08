class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        if(nums.size()==3)return nums[0]*nums[1]*nums[2];
         ans=max(nums[0]*nums[1]*nums[2],nums[n-1]*nums[n-2]*nums[0]);
        return ans;
    }
};