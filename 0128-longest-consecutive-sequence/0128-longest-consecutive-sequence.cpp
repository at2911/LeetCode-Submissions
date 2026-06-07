class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2)return nums.size();
        int count=1;
        int maxi=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            if((nums[i]-nums[i-1])==1)count++;
            else{
                count=1;
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};