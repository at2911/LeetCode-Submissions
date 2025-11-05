class Solution {
    private:
    bool checkEqual(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
    int count[26]={0};
    for(int i=0;i<s1.size();i++){
        int ind=s1[i]-'a';
        count[ind]++;
            }
    int l=s1.size();
    int i=0;

    int c2[26]={0};
    while(i<l && i<s2.size()){
        int ind=s2[i]-'a';
        c2[ind]++;
        i++;

    }   
    if(checkEqual(count,c2)) return 1; 
   
    while(i<s2.size()){
        int ind=s2[i]-'a';
        c2[ind]++;
        char lastchar=s2[i-l];
        ind=lastchar-'a';
        c2[ind]--;
        i++;
        if(checkEqual(count,c2)) return 1;
        
    }
    return 0;
    
    
        
    }
};