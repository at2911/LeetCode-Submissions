class Solution {
public:
    bool canAliceWin(int n) {
        int cnt=10;
        int step=0;
        while(n>0){
            if(n-cnt>=0){
                step++;
                n-=cnt;
                cnt--;
            }
            else break;
        }
        if(step%2==0)return false;
        return true;
    }
};