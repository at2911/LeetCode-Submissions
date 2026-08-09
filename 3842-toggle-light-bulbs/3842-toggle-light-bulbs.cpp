class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>sol;
        unordered_set<int>s;
        for(int i:bulbs){
            if(s.count(i)){
                s.erase(i);
            }
            else s.insert(i);
        }
        for(int i:s){
            sol.push_back(i);
        }
        sort(sol.begin(),sol.end());
        return sol;
    }
};