class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums[0]-nums[nums.size()-1]>=0){
            for(int i=1;i<nums.size();i++){
                if(nums[i]-nums[i-1]<=0)continue;
                else return 0;
            }
            return 1;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]-nums[i]<=0)continue;
            else return 0;
        }
        return 1;
    }
};