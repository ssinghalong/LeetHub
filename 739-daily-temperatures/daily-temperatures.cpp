class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>> st;
        int n = temp.size();
        vector<int> ans(n,-1);
        for(int i=n-1;i>=0;i--){
            int t = temp[i];
            while(!st.empty() && st.top().first<=t){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top().second-i;
                st.push({temp[i],i});
            }
            else{
                ans[i]=0;
                st.push({temp[i],i});
            }
        }
        return ans;
    }
};