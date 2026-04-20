class Solution {
public:
    int findSet(int a,vector<int>&parent){
        while(a!=parent[a]){
            a=parent[a];
        }
        return a;
    }
    void Union(int a,int b,vector<int>&parent){
        int x=findSet(a,parent);
        int y=findSet(b,parent);
        if(x!=y){
            parent[y]=x;
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        unordered_set<int>e;
        vector<int>parent(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(int i=0;i<isConnected.size();i++){
            for(int j=i+1;j<isConnected.size();j++){
                if(isConnected[i][j]){
                   Union(i,j,parent);
                }

            }
        }
        for(int i=0;i<n;i++){
            e.insert(findSet(i,parent));
        }
        return e.size();
    }
};