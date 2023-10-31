class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        if(pref.size()==0 || pref.size()==1) return pref;
        vector<int> ans;
        ans.push_back(pref[0]);
        for(int i=1;i<pref.size();i++){
            ans.push_back(pref[i]^pref[i-1]);
        }
        return ans;
    }
};