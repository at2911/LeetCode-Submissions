class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<vector<int>>ans;
        vector<int>sample;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    
                    sample.push_back(i);
                    sample.push_back(j);
                    // ans.push_back(sample);

                    return sample;
                }
            }
        }
        return sample;
        // return ans;

        
    }
};