class Solution {
public:
    int numberOfSteps(int num) {
        int s=0;
        while(num){
            if(num&1)num-=1;
            else num/=2;
            s++;
        }
        return s;
    }
};