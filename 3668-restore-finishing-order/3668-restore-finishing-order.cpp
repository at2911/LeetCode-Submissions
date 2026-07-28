class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;
        int n=order.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<friends.size();j++){
                if(order[i]==friends[j])
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};