class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        //reverse(s.begin(),s.end());
        int i=0;
        while(s[i]==' '){
        i++;
        }
        string temp="";
        for(int j=i;j<s.size();){
            if(s[j]!=' '){
                temp.push_back(s[j]);
                j++;
                
            }
            else{ 
                ans=temp+" "+ans;
                temp="";
                 while(j<s.size() && s[j]==' '){
            j++;
               
            }

            }
        }
       
       if(!temp.empty())ans=temp+" "+ans;
        if(ans[ans.size()-1]==' '){
            ans.pop_back();
        }
        return ans;
    }
};