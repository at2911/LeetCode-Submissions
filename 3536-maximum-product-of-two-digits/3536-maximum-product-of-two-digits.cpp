class Solution {
public:
    int maxProduct(int n) {
       int ans=1;
       int maxA=0;
       int maxB=0;
       while(n){
        int d=n%10;
        if(d>maxA){
            maxB=maxA;
            maxA=d;
        }
        else if(d>maxB)maxB=d;
        n/=10;
       } 
       ans=maxA*maxB;
       return ans;
    }
};