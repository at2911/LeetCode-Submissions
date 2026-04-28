class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      unordered_map<int,int>freq;
      for(int i:nums){
        freq[i]++;
      }
      int n=nums.size();
      vector<int>ans;
      for(auto &i:freq){
        if(i.second>n/3)ans.push_back(i.first);
      }
    
      return ans;

      
    }
};