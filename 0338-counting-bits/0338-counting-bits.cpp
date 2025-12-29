class Solution {
public:
     vector<int>cnt;
    int count(int n){
        int p=n;
        int c=0;
        while(n!=0){
            if(cnt[n]==0){
                if(n&1)c++;
               n= n>>1;

            }
            else{
                cnt[p]=cnt[n]+c;
                return cnt[p];
            }



        }
        cnt[p]=c;
        return c;
        
    }
    vector<int> countBits(int n) {
       cnt.resize(n+1);
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(count(i));
        }
        return ans;
        
        
    }
};