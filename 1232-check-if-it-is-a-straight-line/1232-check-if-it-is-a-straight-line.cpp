class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double x;
        if(coordinates[0][0]==coordinates[1][0]){
            x=coordinates[0][0];
            for(int i=1;i<coordinates.size();i++){
                if(coordinates[i][0]!=x)return false;
            }
            return true;
        }
        else if(coordinates[0][1]==coordinates[1][1]){
            x=coordinates[1][1];
            for(int i=1;i<coordinates.size();i++){
                if(coordinates[i][1]!=x)return false;
            }
            return true;
        }
       else  x=1.0*(coordinates[0][1]-coordinates[1][1])/(coordinates[0][0]-coordinates[1][0]);
        
        for(int i=1;i<coordinates.size()-1;i++){
            double y=1.0*(coordinates[i][1]-coordinates[i+1][1])/(coordinates[i][0]-coordinates[i+1][0]);
            if(x!=y)return 0;
        }
        return 1;
    }
};