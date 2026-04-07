class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        for(int i=1;i<=32;i++){
            int d=n&1;
            if(d)ans=ans*2+1;
            else ans*=2;
            n=n>>1;
        }
        return ans;
    }
};