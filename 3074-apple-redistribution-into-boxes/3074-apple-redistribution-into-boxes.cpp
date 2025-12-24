class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total=accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end(),greater<int>());
        int c=0;
        int cap=0;
        for(int i:capacity){
            if(cap<total){
                cap+=i;
                c++;
            }
            
            
            else break;
            

        }
        return c;
        
    }
};