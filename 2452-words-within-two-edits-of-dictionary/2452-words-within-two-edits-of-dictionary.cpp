class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        int n=dictionary.size();
        for(int i=0;i<queries.size();i++){

            for(int k=0;k<n;k++){
                int x=0;
            for(int j=0;j<queries[0].size();j++){
                if(queries[i][j]!=dictionary[k][j]){
                    x++;
                }
                if(x>2){
                    break;
                }
               

            }
            if(x<=2){
                ans.push_back(queries[i]);
                break;
            }
            
            }
        }
        return ans;
    }
};