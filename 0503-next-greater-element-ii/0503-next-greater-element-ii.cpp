class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>s;
        for(int i=0;i<2*n;i++){
            while(!s.empty() && nums[i%n]>nums[s.top()]){
                ans[s.top()]=nums[i%n];
                s.pop();
            }
            s.push(i%n);
        }
        return ans;
    }
};