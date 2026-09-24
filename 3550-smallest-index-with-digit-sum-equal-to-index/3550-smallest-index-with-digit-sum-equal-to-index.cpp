class Solution {
public:
    int digS(int x){
        int s=0;
        while(x){
            s+=x%10;
            x/=10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(digS(nums[i])==i)return i;
        }
        return -1;
    }
};