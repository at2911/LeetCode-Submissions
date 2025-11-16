class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return 0;
        while(n!=1){
            if(n%3==0){
                n=n/3;
            }
            
            else {
                return false;
            }
           
        }
        return 1;
    }
};