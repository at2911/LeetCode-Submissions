class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>status;
        for(string s:operations){
            if(s[0]=='+')status.push_back(status[status.size()-1]+status[status.size()-2]);
            else if(s[0]=='D')status.push_back(2*status.back());
            else if(s[0]=='C')status.pop_back();
            else {
                int x=stoi(s);
                status.push_back(x);
            }
        }
        return accumulate(status.begin(),status.end(),0);
    }
};