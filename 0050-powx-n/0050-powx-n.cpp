class Solution {
private:
double power( double x,long long n){
            if (n==0) return 1;
            double val= power(x,n/2);
            if(n&1) return x*val*val;
            else return val*val;
        }
 
public:
    double myPow(double x, int n) {
        long long b=n;
        if(n<0) b=-1LL*n;
        
        
        double ans=power(x,b);
        if(n>=0) return ans;
        else return 1/ans;
        
    }
};