class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string,char>mp1;
        int i=0;
        int j=0;
        while(i<s.size() && j<pattern.size()){
            string temp="";
            while(i<s.size() && s[i]!=' '){
                temp.push_back(s[i]);
                i++;

            }
            if(mp.find(pattern[j])==mp.end() && mp1.find(temp)==mp1.end()){
                mp[pattern[j]]=temp;
                mp1[temp]=pattern[j];
                j++;
            }
            else{
                if(mp[pattern[j]]!=temp || mp1[temp]!=pattern[j])return 0;
                
                j++;
            }
            i++;
        }
        if(i<s.size() || j<pattern.size())return 0;
        return 1;



        
        
    }
};