class Solution {
public:
    bool isPerfectSquare(int num) {
        int x=sqrt(num);
        if(x*x==num)return 1;
        return 0;
    }
};