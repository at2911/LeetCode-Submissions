class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int n=x;
        long long rev=0;
        while(n!=0){
            int r=n%10;
            rev=rev*10+r;
            n/=10;
        }
        if(rev==x) return true;
        return false;
        
    }
};