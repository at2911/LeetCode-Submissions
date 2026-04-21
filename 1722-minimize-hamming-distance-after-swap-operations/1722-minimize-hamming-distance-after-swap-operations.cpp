class DSU{
public:
    vector<int>parent;
    DSU(int n){
        parent.resize(n);
        for(int i=0;i<n;i++)parent[i]=i;
    }
        int find(int a){
            if(a==parent[a])return a;
            return parent[a]=find(parent[a]);
        }
        void Union(int a,int b){
            int x=find(a);
            int y=find(b);
            if(x!=y)parent[y]=x;

        }
 };


class Solution {
public:
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int ans=0;
        unordered_map<int,vector<int>>group;
        int n=source.size();
        DSU dsu(n);
        for(int i=0;i<allowedSwaps.size();i++)dsu.Union(allowedSwaps[i][0],allowedSwaps[i][1]);
        for(int i=0;i<n;i++){
            group[dsu.find(i)].push_back(i);
        }
        
        for(auto &g:group){
            unordered_map<int,int>freq;
            for(int i:g.second){
                freq[source[i]]++;
            }
            for(int i:g.second){
                if(freq[target[i]]>0){
                    freq[target[i]]--;
                }else ans++;
            }

        }
        return ans;



    }
        
    
};