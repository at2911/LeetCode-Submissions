class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        unordered_set<char>c;
        int i=0,j=0;
        // int ct=0;
        while(i<s.size() && j<s.size()){
            if(c.count(s[j])){
                while(s[i]!=s[j]){
                    
                    c.erase(s[i]);
                    i++;
                    
                }
                i++;  
            }
            else {
                 c.insert(s[j]);
            }
            j++;
            ans=max(ans,(int)c.size());
        }
        return ans;
    }
};