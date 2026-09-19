class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int i:nums)mp[i]++;
        unordered_map<int,vector<int>>v;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==3){
                v[nums[i]].push_back(i);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==3){
                if(v[nums[i]][1]-v[nums[i]][0]==v[nums[i]][2]-v[nums[i]][1]){
                    ans++;
                    mp[nums[i]]--;
                }
            }
        }
        return ans;
    }
};