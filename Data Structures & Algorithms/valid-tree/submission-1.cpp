class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size() != n-1) return false;
        vector<vector<int>> adj(n);
        for(auto& p : edges){
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);
        }
        vector<bool> visited(n, false);
        if(!dfs(0,-1,visited, adj)) return false;
        for(bool v: visited){
            if(!v) return false;
        }
        return true;
    }
    bool dfs(int node, int parent, vector<bool>& visited, vector<vector<int>>& adj){
        if(visited[node])return false;
        visited[node] = true;
        for(int nb : adj[node]){
            if(parent == nb) continue;
            if(!dfs(nb, node, visited, adj)) return false;
        }
        return true;
    }
};
