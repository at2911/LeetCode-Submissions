class Solution {
public:
    vector<int>dat;
    int myfib(int n){
        if(n<2) return  n;
        else{
            if(dat[n]==0){
                dat[n]=myfib(n-1)+myfib(n-2);
            }
            return dat[n];
        }
        return 0;

    }
    int fib(int n) {
        dat.resize(n+1);
       return  myfib(n);
        
    }
};