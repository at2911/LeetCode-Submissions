class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sO=0,sE=0;
        int o=-1,e=0;
        while(n--){
            o+=2;
            e+=2;
            sO+=o;
            sE+=e;
        }
        return gcd(sO,sE);
    
    }
};