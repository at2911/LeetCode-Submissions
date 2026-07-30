class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
       if(word.length()<=8)return word.length();
       else if(word.length()<=16)return 8+(n-8)*2;
       else if(word.length()<=24)return 24+(n-16)*3;
       else return 48+ (n-24)*4;
       
    }
};