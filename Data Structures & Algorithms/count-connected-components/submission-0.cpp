class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto& e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> visited(n, false);
        int count =0; 
        for(int i =0; i <n;i++){
            if(!visited[i]){
                count++;
                dfs(i, adj, visited);
            }
        }
        return count;

    }
    void dfs(int i, vector<vector<int>>& adj , vector<bool>& visited){
        visited[i] = true;
        for(int nb : adj[i]){
            if(!visited[nb]){
                dfs(nb, adj, visited);
            }
        }
    }
};
