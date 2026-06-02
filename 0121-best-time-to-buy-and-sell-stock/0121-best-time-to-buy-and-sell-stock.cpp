class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=prices[0];
        vector<int>p;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>cp)p.push_back(prices[i]-cp);
            else{
                cp=prices[i];
            }
        }
        if(p.size()==0)return 0;
        return *max_element(p.begin(),p.end());

    }
};