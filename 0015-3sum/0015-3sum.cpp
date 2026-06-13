class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int sum=0;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int l=i+1,r=nums.size()-1;
            sum=nums[i];
            while(l<r){
                sum+=nums[l];
                sum+=nums[r];
                if(sum==0){
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    ans.push_back(temp);
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1])l++;
                    while(r>l && nums[r]==nums[r+1])r--;
                }
                else if(sum>0){
                    r--;
                }
                else l++;
                sum=nums[i];
            }
        }
        return ans;

    }
};