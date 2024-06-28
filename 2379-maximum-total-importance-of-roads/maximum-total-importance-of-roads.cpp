#define ll long long
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        map<ll,ll> um;
        for(ll i=0;i<roads.size();i++){
            um[roads[i][0]]++;
            um[roads[i][1]]++;
        }
        ll s=0;
        vector<ll> yo;
        for(auto it:um){
            yo.push_back(it.second);
        }
        sort(yo.begin(),yo.end(),greater<ll>());
        for(ll i=0;i<yo.size();i++){
            s+=yo[i]*n;
            n--;
        }
        return s;
    }
};