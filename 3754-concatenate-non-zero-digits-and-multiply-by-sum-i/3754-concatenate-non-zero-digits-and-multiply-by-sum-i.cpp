class Solution {
public:
    int sum(int n){
        int s=0;
        while(n){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int conc(int n){
        int x=0;
        int mul=1;
        while(n){
            int d=n%10;
            if(d!=0){
                x=d*mul+x;
                mul*=10;
            }
             n/=10;
        }
        return x;
    }
    long long sumAndMultiply(int n) {
        long long ans=conc(n);
        ans*=sum(ans);
        return ans;
    }
};