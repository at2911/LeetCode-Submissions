class Solution {
public:
    int countTriples(int n) {
        int ans=0;
        for(int i=5;i<=n;i++){
            for(int j=1;j<i;j++){
                for(int k=1;k<i;k++){
                    if(k*k + j*j == i*i){
                        ans++;
                    }
                }
            }
        }
        return ans;
        
            
          
        
        
        
    }
};