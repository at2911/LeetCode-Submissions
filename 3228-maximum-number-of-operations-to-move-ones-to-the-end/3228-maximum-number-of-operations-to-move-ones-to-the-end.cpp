class Solution {
public:
    int maxOperations(string s) {
        int one=0;
        int ans=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='1') one ++;
        else{
            if(s[i+1]=='1' || i+1==s.size())ans+=one;
        }

       }
       return ans;
        
    }
};