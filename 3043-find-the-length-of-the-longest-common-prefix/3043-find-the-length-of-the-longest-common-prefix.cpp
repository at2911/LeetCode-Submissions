class Solution {
public:
    int len(int x){
        int c=0;
        while(x){
            x/=10;
            c++;
        }
        return c;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int count=0;
        unordered_set<int>s;
        for(int i=0;i<arr1.size();i++){
            int copy=arr1[i];
            while(copy){
                s.insert(copy);
                copy/=10;
            }
        }
        for(int i=0;i<arr2.size();i++){
            int copy=arr2[i];
            while(copy){
                if(s.count(copy)){
                    int x=len(copy);
                    if(x>count)count=x;
                    break;       
                }
                copy/=10;
            }
        }
        return count;

        
    }
};