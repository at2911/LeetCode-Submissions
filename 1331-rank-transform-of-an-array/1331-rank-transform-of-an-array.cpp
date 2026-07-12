class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0)return arr;
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int r=1;
        unordered_map<int,int>mp;
        mp[temp[0]]=1;
        for(int i=1;i<temp.size();i++){
            if(temp[i]==temp[i-1]){
                mp[temp[i]]=r;
            }
            else{
                r++;
                mp[temp[i]]=r;
            } 
        }
        for(int i=0;i<temp.size();i++){
            temp[i]=mp[arr[i]];
        }
        return temp;
        
    }
};