class Solution {
public:
    bool isPal(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else return 0;
        }
        return 1;
    }
    bool isPalindromic(string s) {
        string bin="";
        for(char c:s){
            int x=c;
            string temp="";
            while(x){
                int d=x&1;
                char c='0'+d;
                temp.push_back(c);
                x=x>>1;
            }
            if(temp.size()==8)
            bin+=temp;
            else {
                int x=8-temp.size();
                while(x--){
                    temp.push_back('0');
                }
                bin+=temp;
            }
        }

        return isPal(bin);
    }
};