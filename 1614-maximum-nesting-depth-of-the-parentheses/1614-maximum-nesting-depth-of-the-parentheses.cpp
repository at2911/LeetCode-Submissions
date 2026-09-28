class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int ans=0;
        for(char c:s){
            if(c=='(')cnt++;
            else if(c==')')cnt--;
            ans=max(ans,cnt);
        }
        return ans;
    }
};