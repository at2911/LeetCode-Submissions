class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];

       }
       for(int i=0;i<nums.size();i++){
        int ls=0;
        for(int j=0;j<i;j++){
            ls+=nums[j];
        }
        if(sum-ls-nums[i]==ls) return i;

        
       }
       return -1;
    }
};