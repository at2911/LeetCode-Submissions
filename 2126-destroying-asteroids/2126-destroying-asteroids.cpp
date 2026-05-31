class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        for(int i:asteroids){
            if(i<=mass)mass+=i;
            else return 0;
            if(mass>100000)return 1;
        }
        return 1;
    }
};