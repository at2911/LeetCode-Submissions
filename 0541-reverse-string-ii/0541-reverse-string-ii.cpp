class Solution {
public:
    string reverseStr(string s, int k) {
        bool flag=0;
        int copy=k;
        string ans="";
        int i=0;
        while(i<s.size()){
            string temp="";
            while(i<s.size() &&copy--){
                temp=s[i]+temp;
                i++;
            }
            ans+=temp;
            copy=k;
            while(i<s.size() && copy--){
                ans.push_back(s[i]);
                i++;
            }
            copy=k;

        }
        return ans;
       
    }
};