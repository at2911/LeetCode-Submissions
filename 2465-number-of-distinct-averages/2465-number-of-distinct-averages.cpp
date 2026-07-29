class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<float>s;
        int i=0,j=nums.size()-1;
        while(i<=j){
            float c=(nums[i]+nums[j])/2.0;
            s.insert(c);
            i++;
            j--;
        }
        return s.size();
    }
};