class Solution {
public:
    int sum(int n){
        int s=0;
        while(n){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        int maxi=INT_MIN;
        for(int i=lowLimit;i<=highLimit;i++){
            int s=sum(i);
            mp[s]++;
            maxi=max(maxi,mp[s]);
        }
        return maxi;
        
    }
};