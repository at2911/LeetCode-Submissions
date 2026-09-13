class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        while(x!=0 && y!=0){
            if((x&1) != (y&1))cnt++;
            x=x>>1;
            y=y>>1;
            if(x==0 || y==0 )break;
        }
        while(y!=0){
            if(y&1)cnt++;
            y=y>>1;
        }
        while(x!=0){
            if(x&1)cnt++;
            x=x>>1;
        }
        return cnt;
    }
};