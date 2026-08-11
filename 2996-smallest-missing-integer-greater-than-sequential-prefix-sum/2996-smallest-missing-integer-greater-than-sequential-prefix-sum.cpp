class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int s=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1)s+=nums[i];
            else break;
        }
        while(find(nums.begin(),nums.end(),s)!=nums.end()){
            s++;
        }
        return s;
    }
};