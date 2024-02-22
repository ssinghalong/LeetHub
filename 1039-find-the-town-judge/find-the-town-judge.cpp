class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<bool,int>> vec(n,{true,0});
        for(auto it:trust){
            vec[it[0]-1].first=false;
            vec[it[1]-1].second++;
        }
        int ans = -1;
        for(int i=0;i<n;i++){
            auto it = vec[i];
            if(it.first==true && it.second==n-1){
                ans=i+1;
            }
        }
        return ans;
    }
};