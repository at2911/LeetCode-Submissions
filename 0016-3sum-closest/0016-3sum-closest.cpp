class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        long long sum = INT_MAX;
        for (int i = 0; i < nums.size() - 1; i++) {
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r) {
                int temps = nums[i] + nums[l] + nums[r];
                if (temps == target)
                    return target;
                if(abs(1LL*(temps-target)) < abs(1LL*(sum-target))) sum=temps;
                
                // else if (abs(temps - target) < abs(sum))
                //     sum = temps;
                if (temps > target) {
                    r--;
                    
                } else {
                    l++;
            
                }
               
            }
        }
        return sum;
    }
};