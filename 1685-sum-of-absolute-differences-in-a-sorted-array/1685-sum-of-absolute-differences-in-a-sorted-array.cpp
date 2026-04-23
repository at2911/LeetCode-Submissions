class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>ans;
        vector<int>sum;
        int x=0; 
        //sum[0]=nums[0];
        for(int i=0;i<nums.size();i++){ 
            x+=nums[i];
            sum.push_back(x);
        }
       
        for(int i=0;i<nums.size();i++){
            int temp=0;
            temp+=(i*nums[i]-(sum[i]-nums[i]));   
            temp+=((x-sum[i])-(nums.size()-i-1)*nums[i]);
            ans.push_back(temp);
           
           
        }
        return ans; 
    }
};