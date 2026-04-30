class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans=0;
        unordered_map<char,int>mp;
        for(char c:text){
            mp[c]++;
        }
        while(1){
            if(mp['b']>=1 && mp['a']>=1 && mp['l']>=2 && mp['o']>=2 && mp['n']>=1){
                ans++;
                mp['b']--;
                mp['a']--;
                mp['l']-=2;
                mp['o']-=2;
                mp['n']--;
            }
            else{
                break;
            }
        }
        return ans;
    }
};