class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[maxi]){
                maxi=i;
            }
            if(nums[i]<nums[mini]){
                mini=i;
            }
        }
        int n=nums.size();
        return min(min(max(mini,maxi)+1,n-min(mini,maxi)),min(maxi,mini)+1+n-max(maxi,mini));
    }
};