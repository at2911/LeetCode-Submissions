class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>ans;
        map<int,string>mp;
        for(int i=0;i<names.size();i++){
            mp[heights[i]]=names[i];
        }
        for(auto &i:mp){
            ans.push_back(i.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};