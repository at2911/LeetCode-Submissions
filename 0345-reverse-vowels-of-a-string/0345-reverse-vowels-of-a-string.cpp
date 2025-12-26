class Solution {
public:
    string reverseVowels(string s) {
        string vow="";
        for(char c:s){
            if(c=='A' || c=='E'|| c=='I'||c=='O'||c=='U'||c=='a' || c=='e'|| c=='i'||c=='o'||c=='u')vow.push_back(c);
        }
        reverse(vow.begin(),vow.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
             if(c=='A' || c=='E'|| c=='I'||c=='O'||c=='U'||c=='a' || c=='e'|| c=='i'||c=='o'||c=='u'){
                s[i]=vow[j];
                j++;
             }
        }
        return s;
        
    }
};