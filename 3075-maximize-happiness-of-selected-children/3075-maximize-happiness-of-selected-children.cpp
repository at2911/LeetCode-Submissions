class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long s=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        for(int i=0;i<k;i++){
            happiness[i]-=i;
            if(happiness[i]<=0)break;
            s+=happiness[i];
        }
        return s;
        
    }
};