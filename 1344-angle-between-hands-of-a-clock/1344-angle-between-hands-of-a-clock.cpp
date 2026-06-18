class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr=hour%12*30.0 + minutes/60.0*30;
        double min=minutes*6;
        double diff=abs(min-hr);
        if(360-diff<diff)return 360-diff;
        return diff;
        
    }
};