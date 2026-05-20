class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        int n=A.size();
        int count=0;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            if(s.count(A[i]))count++;
            else s.insert(A[i]);
            if(s.count(B[i]))count++;
            else s.insert(B[i]);
            ans.push_back(count);
        }
        return ans;
       
    }
};