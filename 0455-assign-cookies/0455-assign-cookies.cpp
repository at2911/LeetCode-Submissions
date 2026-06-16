class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0)return 0;
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int j=0;
        for(int i=0;i<g.size();i++){
            if(j<s.size() && g[i]<=s[j]){
                j++;
                ans++;
            }
            else{
                while(j<s.size()&& g[i]>s[j]){
                    j++;
                }
                if(j==s.size())return ans;
                j++;
                ans++;
            }
        }
        return ans;
    }
};