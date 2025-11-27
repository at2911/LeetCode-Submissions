class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx=INT_MIN;
        // bool zero=0;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)c++;
            else{
                
                c=0;
            }
            maxx=max(c,maxx);

        }return maxx;
        
    }
};