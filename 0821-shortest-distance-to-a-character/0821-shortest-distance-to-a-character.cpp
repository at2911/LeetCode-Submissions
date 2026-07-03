class Solution {
public:
    int minD(int i,vector<int>&ind){
        int mini=INT_MAX;
        for(int x:ind){
            mini=min(mini,(int)abs(x-i));
        }
        return mini;
    }
    vector<int> shortestToChar(string s, char c) {
        vector<int>ind;
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch==c)ind.push_back(i);
        }
        for(int i=0;i<s.size();i++){
            ans.push_back(minD(i,ind));
        }
        return ans;
    }
};