class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_map<int,vector<int>> mp;
        unordered_set<int> s1,s2;
        for(auto it:trust){
            s1.insert(it[0]);
            s2.insert(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        for(auto it:s1){
            if(s2.find(it)!=s2.end()){
                s2.erase(it);
            }
        }
        if(s2.empty()) return -1;
        if(mp[*s2.begin()].size()==n-1)
            return *s2.begin();
        return -1;
    }
};