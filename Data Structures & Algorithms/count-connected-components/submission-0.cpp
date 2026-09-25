class Solution {
public:
    void dfs(vector<vector<int>>&adj,unordered_map<int,bool>&visited,int node){
        visited[node] = true;
        for(auto nbr:adj[node]){
            if(!visited[nbr]){
                dfs(adj,visited,nbr);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        unordered_map<int,bool>visited;
        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int count = 0;
        for(int node=0; node<n; node++){
            if(!visited[node]){
                dfs(adj,visited,node);
                count++;
            }
        }
        return count;
    }
};
