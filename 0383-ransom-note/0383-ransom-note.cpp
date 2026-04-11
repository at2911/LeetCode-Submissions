class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       vector<int>v1(26,0);
       for(int i=0;i<magazine.size();i++){
        v1[magazine[i]-'a']++;
       } 
       for(int i=0;i<ransomNote.size();i++){
        v1[ransomNote[i]-'a']--;
       }
       for(int i=0;i<26;i++){
        if(v1[i]<0)return 0;
       }
       return 1;
     
    }
};