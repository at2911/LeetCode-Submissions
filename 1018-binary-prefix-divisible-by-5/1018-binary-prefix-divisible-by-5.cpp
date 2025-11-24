class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>ans;
        int s=0;
        for(int i:nums){
            if(i==0) s*=2;
            else s=s*2+1;
            s=s%10;
            if(s%5==0)ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;

        
    }
};