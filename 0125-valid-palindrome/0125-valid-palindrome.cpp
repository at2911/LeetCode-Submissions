class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(char c:s){

            if(c>='A'&& c<='Z')
            temp.push_back(c+32);
            else if(c>='a' && c<='z')
            temp.push_back(c);
            else if(c>='0' && c<='9')
            temp.push_back(c);
            

        }
        int i=0,j=temp.size()-1;
        while(i<j){
            if(temp[i++]==temp[j--]) continue;
            else return false;
        }
        return true;
       
    
        
    }
};