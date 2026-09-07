class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>s;
        for(int i:candyType){
            s.insert(i);
        }
        if(candyType.size()/2<=s.size())
        return candyType.size()/2;
        return s.size();
    }
};