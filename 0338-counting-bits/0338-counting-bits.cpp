class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        vector<int>cnt(n+1,0);
        for(int i=0;i<=n;i++){
            int p=i;
            int count=0;
            while(p!=0){

                if(cnt[p]==0){
                    int d=p&1;
                    p=p>>1;
                    if(d==1)count++;
                }
                else{
                   
                    
                    break;
                }
            }
            cnt[i]=cnt[p]+count;
            ans.push_back(cnt[i]);
        }
        return ans;
    }
};