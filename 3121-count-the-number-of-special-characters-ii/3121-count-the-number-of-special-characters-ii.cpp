class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>s(26,0);
        vector<int>S(26,0);
        for(int i=0;i<word.size();i++){
            char c=word[i];
            if(c>='A' && c<='Z'){
                int x=c-'A';
                S[x]++;
            }
            else{
                int x=c-'a';
                if(S[x]==0)
                s[x]++;
                else s[x]=0;

            }

        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(s[i]*S[i]>0)ans++;

        }
        return ans;

    }
};