class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>vow;
        unordered_map<char,int>cons;
        int vowel=0;
        int constn=0;
        for(char c:s){
            if(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u'){
                vow[c]++;
                vowel=max(vowel,vow[c]);
            }
            else{
                cons[c]++;
                constn=max(constn,cons[c]);
            }
        }
        return vowel+constn;
    }
};