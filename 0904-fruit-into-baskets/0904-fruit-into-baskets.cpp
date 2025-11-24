class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // if(fruits.size()<=2) return fruits.size();
        unordered_set<int> s;
        int maxx = INT_MIN;

        // int prev=0;
        int r = 0;
        int l = 0;
        // int c=2;
       
        for (r = 0; r < fruits.size(); r++) {

            s.insert(fruits[r]);
            while (s.size() > 2) {
                int copy = fruits[r-1];
                 l=r-1;
                while (l > 0 && fruits[l] == copy) {
                    l--;
                }
                s.erase(fruits[l]);
                l++;
               
               
                
                
                
                
            }
         

            maxx = max(maxx, r - l +1);
            cout<<l<<","<<r<<endl;
        }
        // if(l==0) return maxx+1;
        return maxx;
    }
};