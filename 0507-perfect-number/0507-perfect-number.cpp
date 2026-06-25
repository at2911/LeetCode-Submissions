class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)return 0;
        long long s=1;
        for(int i=2;i*2<=num;i++){
            if(num%i==0)s+=i;
            if(s>num)return 0;
        }
        if(s==num)return 1;
        return 0;
    }
};