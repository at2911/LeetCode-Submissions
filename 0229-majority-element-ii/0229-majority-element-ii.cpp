class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      unordered_map<int,int>freqc;
      for(int i:nums){
        freqc[i]++;
      }
      int n=nums.size();
      vector<int>ans;
      for(auto &i:freqc){
        if(i.second>n/3)ans.push_back(i.first);
      }
      return ans;

      
    }
};