class Solution {
public:
    string compressedString(string word) {
        string comp;
        int c=1;
         if(word.size()==1){
             comp.append(to_string(1));
             comp.push_back(word[0]);
             return comp;

         }
        for(int i=1;i<word.size();i++){
            
            if(word[i-1]==word[i])c++;
            else{
                comp.append(to_string(c));
                comp.push_back(word[i-1]);
                c=1;
            }
            if(c>9){
                comp.append(to_string(9));
                comp.push_back(word[i]);
                c=1;


            }

          


           

        }
        if(word[word.size()-1]!=word[word.size()-2]){
             comp.append(to_string(1));
             comp.push_back(word[word.size()-1]);
        }
        else{
           
            comp.append(to_string(c));
            comp.push_back(word[word.size()-1]);
        }
        return comp;
        
    }
};