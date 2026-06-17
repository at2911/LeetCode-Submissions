class Solution {
public:
    vector<vector<string>>ans;
    bool isPal(string &s,int l,int r){
        while(l<r){
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
    void solve(int ind,string &s,vector<string>&temp){
        if(ind==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPal(s,ind,i)){
                temp.push_back(s.substr(ind,i-ind+1));
                solve(i+1,s,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        solve(0,s,temp);
        return ans;
    }
};