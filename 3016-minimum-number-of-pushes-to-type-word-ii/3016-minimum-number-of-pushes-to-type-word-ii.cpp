class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        int ans=0;
        for(char c:word){
            freq[c-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        for(int i=0;i<26;i++){
            ans+=(i/8+1)*(freq[i]);
        }
        return ans;
        
    }
};