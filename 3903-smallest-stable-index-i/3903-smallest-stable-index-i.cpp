class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       // vector<int>status;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int c=0;
        for(int i=0;i<nums.size();i++){
            mini=INT_MAX;
            for(int j=i;j<nums.size();j++){
                mini=min(mini,nums[j]);
            }
            maxi=max(maxi,nums[i]);
           
            if(maxi-mini<=k)return i;
        }
        return -1;
         
        
    }
};