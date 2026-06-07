class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int l=j+1;
                int r=nums.size()-1;
                long long s=nums[i]+nums[j];
                long long req=target-s;
                while(l<r){
                    if(nums[l]+nums[r]==req){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        ans.push_back(temp); 
                        l++;
                        r--;
                        while(l < r && nums[l] == nums[l-1]) l++;
                        while(l < r && nums[r] == nums[r+1]) r--;
                    }
                    else if(nums[l]+nums[r]<req){
                        l++;
                    }
                    else {
                        r--;
                    }
                
                }
            }
        }
        return ans;
        
    }
};