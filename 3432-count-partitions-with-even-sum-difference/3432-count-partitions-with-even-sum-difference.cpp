class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int s=nums[0];
        sum-=s;
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            s+=nums[i];
            sum-=nums[i];
            if((sum-s)%2==0)c++;
        }
        return c;



        
    }
};