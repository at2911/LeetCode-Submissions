class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>chars;
        int l=0,r=0;
        int c=0;
        int maxx=0;
        for(r=0;r<s.size();r++){
            if(!chars.count(s[r])){
                chars.insert(s[r]);
                c++;

            }
            else{
                maxx=max(maxx,c);
                
                while(chars.count(s[r])){
                    chars.erase(s[l]);
                    c--;
                    l++;


                }
                chars.insert(s[r]);
                c++;

            }

        }
        return max(maxx,c);

        
    }
};