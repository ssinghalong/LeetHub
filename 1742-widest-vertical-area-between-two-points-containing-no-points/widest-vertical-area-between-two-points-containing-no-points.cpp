class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> real;
        for(int i=0;i<points.size();i++){
            real.push_back(points[i][0]);
        }
        sort(real.begin(),real.end());
        int ma=-1;
        for(int i=1;i<real.size();i++){
            if(real[i]-real[i-1]>ma){
                ma=real[i]-real[i-1];
            }
        }
        return ma;
    }
};