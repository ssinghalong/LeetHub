class Solution {
public:
    int timer=0;
    void dfs(int node,int parent,vector<int> adj[],vector<int> &vis,int tin[],int low[],vector<vector<int>> &bridge){
        vis[node]=1;
        timer++;
        tin[node]=low[node]=timer;

        for(auto it:adj[node]){
            if(it == parent) continue;
            else if(vis[it]==0){
                dfs(it,node,adj,vis,tin,low,bridge);
                low[node]=min(low[node],low[it]);

                if(low[it]>tin[node]){
                    bridge.push_back({node,it});
                }
            }
            else{
                low[node]=min(low[node],low[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        for(auto it: connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(n,0);
        int tin[n];
        int low[n];
        vector<vector<int>> bridge;

        dfs(0,-1,adj,vis,tin,low,bridge);
        return bridge;
    }
};