class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n!=0){
            if(n==1) return true;
            int r=n%2;
            if(r!=0) return false;
            n/=2;
        }
        return false;
    }
};