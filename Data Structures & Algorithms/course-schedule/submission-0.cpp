class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto& p : prerequisites){
            adj[p[0]].push_back(p[1]);
        }
        unordered_set<int> Visited;
        for(int course = 0;course < numCourses;course++){
            if(!dfs(course, Visited, adj)) return false;
        }
        return true;

    }
    bool dfs(int course, unordered_set<int>& Visited, vector<vector<int>>& adj){
        if(Visited.count(course)) return false;
        if(adj[course].empty()){
            return true;
        }
        Visited.insert(course);
        for(int pre : adj[course]){
            if(!dfs(pre, Visited, adj)) return false;
        }
        Visited.erase(course);
        adj[course].clear();
        return true;
    }
};
