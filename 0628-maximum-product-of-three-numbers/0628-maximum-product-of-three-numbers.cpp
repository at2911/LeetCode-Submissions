class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int s=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        if(nums[s-1]>0 || nums[0]<0){
            return nums[0]*nums[1]*nums[2];
        }
        // else if(nums[0]<0)return nums[s-1]*nums[s-2]*nums[s-3];
        else {
            return max(1LL*nums[0]*nums[1]*nums[2],1LL*nums[s-1]*nums[s-2]*nums[0]);
        }
        return 0;

        

        
    }
};