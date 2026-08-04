class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int j=0;
        for(int i=nums[0];i<=nums[nums.size()-1];i++){
            if(nums[j]==i){
                j++;
            }
            else ans.push_back(i);
        }
        return ans;
    }
};