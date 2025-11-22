class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int mini = INT_MAX;
        int sum = 0;
        int l = 0;
        int r = 0;
        int c = 0;
        bool check = 0;
        for(r=0;r<nums.size();r++){
            if(sum<target){
                c++;
                sum+=nums[r];
                continue;

            }
            while((sum-nums[l])>=target){
                sum-=nums[l];
                l++;
                c--;
            }
            mini=min(mini,c);
            sum+=nums[r];
            c++;

        }

        if ((sum < target) && !check)
            return 0;

        while ((sum - nums[l]) >= target) {
            sum -= nums[l];
            l++;
            c--;
        }
        // cout<<c<<" "<<mini;
        // cout<<sum;
        // cout<<nums.size();
        return min(mini, c);
    }
};