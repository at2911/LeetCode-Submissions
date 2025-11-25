class Solution {
public:
    bool isPow7(int n){
        if(n==1) return 1;
        else
            while(n!=1){
            int r=n%7;
            if(r!=0)return 0;
            else n/=7;
            }
        
        return 1;
    }
    bool isPow3(int n){
        if(n==1) return 1;
        else
            while(n!=1){
            int r=n%3;
            if(r!=0)return 0;
            else n/=3;
            }
        
        return 1;
    }
    int smallestRepunitDivByK(int k) {
        // if(k==1) return 1;
        unordered_set<int>s={0,2,4,5,6,8};
        if(s.count(k%10))return -1;

        // int conunt=1;
        if(isPow3(k)){
            return k;
        }
        if(isPow7(k)){
            return (k-k/7);
        }
        long long mod=0;
        for(int i=1;i<INT_MAX;i++){
            mod=(mod*10+1)%k;
            if(mod==0)return i;

        }
        return -1;
        
        
       
        
        
    }
};