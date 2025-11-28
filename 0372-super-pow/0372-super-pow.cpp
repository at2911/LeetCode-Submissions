class Solution {
private:
const int MOD=1337;
int power(int a,int b){
    a%=MOD;
    if(b==0) return 1;
    
        
        int temp=(power(a,b/2)%MOD)%MOD;
        if(b&1) return (1LL*a*temp*temp)%MOD;
        else return (1LL*temp*temp)%MOD;
        
    
}
public:
    int superPow(int a, vector<int>& b) {
        if(a==1) return 1;
        if(b.size()==1)return power(a,b[0]);
        int ans=1;
        
         
       
        for(int i=0;i<b.size();i++){
            ans=(power(ans,10)*power(a,b[i]))%MOD;
            

            

            

        }
        // cout<<power(3,4);
        // cout<<power(2,32);
        return ans%MOD;


        
    }
};