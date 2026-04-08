class Solution {
public:
    const long long MOD=1000000007;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i=0;i<queries.size();i++){
            int li=queries[i][0];
            int ri=queries[i][1];
            int ki=queries[i][2];
            int vi=queries[i][3];
        
            for(int j=li;j<=ri;j+=ki){
                long long x=1LL*nums[j]*vi%MOD;
                nums[j]=x;
            }
        }
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){

            ans=ans^nums[i];
        }
        return ans;
    }

};