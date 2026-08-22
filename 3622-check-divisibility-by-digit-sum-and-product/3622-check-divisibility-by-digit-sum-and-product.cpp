class Solution {
public:
    int digSum(int n){
        int s=0;
        while(n){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int digP(int n){
        int p=1;
        while(n){
            p*=n%10;
            n/=10;
        }
        return p;
    }
    bool checkDivisibility(int n) {
        int s=digSum(n);
        int p=digP(n);
        if(n%(s+p)==0)return 1;
        return 0;
    }
};