class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans="";
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        ans="1";
        mp['1']--;
        //cout<<mp['1'];
        while(mp['0']){
            ans="0"+ans;
            mp['0']--;

        }
            while(mp['1']){
            ans="1"+ans;
            mp['1']--;
            
        }
        return ans;
        
    }
};