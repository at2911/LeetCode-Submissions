class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=0;
        unsigned long prod=1;
        long long l=1,g=1;
        for(int i=0;i<nums.size();i++){
            prod=1;
            g=1;
            l=1;
            for(int j=i;j<nums.size();j++){
                prod*=nums[j];
                if(i==j){
                    g=nums[i];
                    l=nums[j];
                }
                else {
                    g=gcd(g,nums[j]);
                   l=lcm(l,nums[j]);
                }
                if(prod==(l*g)){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};