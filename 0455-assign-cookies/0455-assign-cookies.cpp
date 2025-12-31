class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int c=0;
    int j=0;
    for(int i=0;i<g.size();i++){
        if(j<s.size() && s[j]>=g[i]){
            c++;
            j++;
        }
        else{
            j++;
            while(j<s.size()){
                if(s[j]>=g[i]){
                    c++;
                    j++;
                    break;
                    
                }
                j++;
            }
        }
    }
    return c;
    }
};