class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int t=0,y=0;
        for(int i=0;i<s.size() && t<g.size();i++){
            if(s[i]>=g[t]){
                t++;
                y++;
            }
        }
        return y;
    }
};