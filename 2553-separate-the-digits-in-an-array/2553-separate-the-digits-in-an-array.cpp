class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
           vector<int>temp;
           while(nums[i]){
            int r=nums[i]%10;
            temp.push_back(r);
            nums[i]/=10;

           }
           reverse(temp.begin(),temp.end());
           for(int i:temp){
            ans.push_back(i);
           }
            
        }
        return ans;
       
        
    }
};