class Solution {
public:
    int jump(vector<int>& nums) {
        int end = nums.size() - 1;
        int i = 0;
        int c = 0;
        while (i < end) {
            if (i + nums[i] >= end) {
                return c + 1;
            }
             else {
                int maxx = i + nums[i];
                int k;
                int maxi = i;
                for (k = i + 1; k <= (i + nums[i]); k++) {
                    if ((k + nums[k]) >= maxx) {
                        maxx=(k+nums[k]);
                        maxi = k;
                    }
                }
                i = maxi;
                c++;
            }
            // cout << i << " ";
        }
        return c;
    }
};