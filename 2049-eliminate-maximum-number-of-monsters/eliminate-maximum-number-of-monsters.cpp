class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<double> coming(dist.size(),0);
        for(int i=0;i<dist.size();i++){
            coming[i]=(dist[i]-1)/speed[i];
        }
        sort(coming.begin(),coming.end());
        for(int i=0;i<coming.size();i++){
            if(coming[i]<i){
                return i;
            }
        }
        return dist.size();
    }
};