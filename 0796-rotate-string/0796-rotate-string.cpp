class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return 0;
        int n=s.size();
        int j=0;
        for(int i=0;i<n;i++){
            int temp=i;
            while(j<n && s[temp]==goal[j]){
                j++;
                temp=(temp+1)%n;
            }
            if(j==n)return 1;
            j=0;
        }
        return 0;
    }
};