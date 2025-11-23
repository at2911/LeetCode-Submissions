class Solution {
public:
    int DAT[38]={0};
    int trib(int n){
        if (n<2) return n;
        else if(n==2) return 1;
        else {
            if(DAT[n]==0){
                DAT[n]=trib(n-1)+trib(n-2)+trib(n-3);
            }
            return DAT[n];
        }
    }
    int tribonacci(int n) {
        return trib(n);
        
    }
};