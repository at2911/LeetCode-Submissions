class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans=0;
    vector<int>s(26,0);
    vector<int>S(26,0);
    for(int i=0;i<word.size();i++){
        char c=word[i];
        if(c>='A' && c<='Z')S[c-'A']++;
        else s[c-'a']++;
    }
    for(int i=0;i<26;i++){
        if(s[i]*S[i])ans++;
    }
        return ans;
    }
};