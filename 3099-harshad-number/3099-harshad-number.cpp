class Solution {
public:
    int digSum(int x){
        int s=0;
        while(x){
            s+=x%10;
            x/=10;
        }
        return s;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        if(x%(digSum(x))==0)return digSum(x);
        return -1;
        
    }
};