class Solution {
public:
    int pivotInteger(int n) {
        int s=n*(n+1)/2;
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
            if(sum==s)return i;
            s-=i;
        }
        return -1;
    }
};