class Solution {
public:
    int rev(int n){
        int cp=0;
        while(n!=0){
            int d=n%10;
            cp=cp*10+d;
            n/=10;
        }
        return cp;
    }
    int mirrorDistance(int n) {
        if(n<10)return 0;
        int r=rev(n);
        return abs(r-n);
    }
};