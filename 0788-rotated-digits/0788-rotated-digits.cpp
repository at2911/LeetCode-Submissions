class Solution {
public:
    bool filter(int i){
        while(i){
            int d=i%10;
            if(d==3 || d== 4 || d==7)return false;
            i=i/10;
        }
        return true;
    }
    int rotatedDigits(int n) {
        int ans=0;
        unordered_map<int,int>mp={{1,1},{2,5},{5,2},{6,9},{8,8},{9,6},{0,0}};

        for(int i=1;i<=n;i++){
            if(!filter(i))continue;
            int temp=i;
            int copy=i;
            int x=0;
            int mul=1;
            while(temp){
                int d=temp%10;
                x=mp[d]*mul+x;
                temp/=10;
                mul*=10;
                
                
                
                
            }
            if(x!=copy)ans++;
        }
        return ans;
        

    }
};