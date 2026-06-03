class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int water=INT_MAX,land=INT_MAX;
        int waterI,landI;
        int w=INT_MAX,l=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            if(landStartTime[i]+landDuration[i]<land)landI=i;
            land=min(land,landStartTime[i]+landDuration[i]);
        }
        for(int i=0;i<waterStartTime.size();i++){
          if(max(land,waterStartTime[i])+waterDuration[i]<w){
            w=max(land,waterStartTime[i])+waterDuration[i];
          }
          if(waterStartTime[i]+waterDuration[i]<water)waterI=i;
            water=min(water,waterStartTime[i]+waterDuration[i]);
        }
         for(int i=0;i<landStartTime.size();i++){
           if(max(water,landStartTime[i])+landDuration[i]<l)l=max(water,landStartTime[i])+landDuration[i];
        }
        return min(w,l);
    }
};