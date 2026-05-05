class Solution {
public:
    int bit(int i){
        int ans=0;
        while(i){
            int d=i&1;
            if(d)ans++;
            i=i>>1;
        }
        return ans;
    }
 
    unordered_map<int,int>mp;
    vector<int> sortByBits(vector<int>& arr) {
       
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=bit(arr[i]);
        }
        sort(arr.begin(),arr.end(),[&](int a,int b){
            if(mp[a]==mp[b])return a<b;
            return mp[a]<mp[b];

        });
        return arr;


    }
};