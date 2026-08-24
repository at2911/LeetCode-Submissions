class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double avg=INT_MAX;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            avg=min(avg,(nums[i]+nums[j])/2.0);
            i++;
            j--;
        }
        return avg;
    }
};