class Solution {
public:

    int smallestRepunitDivByK(int k) {

        unordered_set<int>s={0,2,4,5,6,8};
        if(s.count(k%10))return -1;

      
        long long mod=0;
        for(int i=1;i<INT_MAX;i++){
            mod=(mod*10+1)%k;
            if(mod==0)return i;

        }
        return -1;
        
        
       
        
        
    }
};