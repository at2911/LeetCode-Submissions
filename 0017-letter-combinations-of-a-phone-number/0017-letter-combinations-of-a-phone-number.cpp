class Solution {
public:
    void solve(string &digits,string op,int ind,vector<string>&ans,string map[]){
        if(ind>=digits.length()){
            ans.push_back(op);
            return;
        }
        int num=digits[ind]-'0';
        string value=map[num];
        for(int i=0;i<value.length();i++){
            op.push_back(value[i]);
            solve(digits,op,ind+1,ans,map);
            op.pop_back();
        }
            }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string op;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int ind=0;
        solve(digits,op,ind,ans,map);
        return ans;
    }
};