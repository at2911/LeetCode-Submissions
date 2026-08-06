class Solution {
public:
    int digP(int n){
        int p=1;
        while(n){
            p*=n%10;
            n/=10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            int x=digP(i);
            if(x%t==0)return i;
        }
        return 0;
    }
    
};