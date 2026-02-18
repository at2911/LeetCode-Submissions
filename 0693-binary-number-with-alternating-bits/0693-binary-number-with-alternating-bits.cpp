class Solution {
public:
    bool hasAlternatingBits(int n) {
        int p=n&1;
        n=n>>1;
        bool flag=0;
        while(n!=0){
           int d=n&1;
            if(d==p)return 0;
            p=d;
            n=n>>1;
        }
        return 1;
        
    }
};