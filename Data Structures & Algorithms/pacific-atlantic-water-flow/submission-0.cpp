class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int rows = heights.size();
        int cols = heights[0].size();

        set<pair<int, int>> atl;
        set<pair<int, int>> pac;
        for(int c =0; c<cols; c++){
            dfs(0,c,pac, heights[0][c], heights);
            dfs(rows-1,c,atl, heights[rows-1][c], heights);
        }
        for(int r =0; r<rows; r++){
            dfs(r,0,pac, heights[r][0], heights);
            dfs(r,cols-1,atl, heights[r][cols-1], heights);
        }
        vector<vector<int>> result;
        for(int r =0; r < rows;r++){
            for(int c =0; c< cols;c++){
                if(atl.count({r,c}) && pac.count({r,c})){
                    result.push_back({r,c});
                }
            }
        }
        return result;

    }
    void dfs(int r, int c, set<pair<int, int>>& visited, int prevheight, vector<vector<int>>& heights ){
        if(visited.count({r,c}) || r < 0 || c<0 || r >= heights.size() || c >= heights[0].size() || prevheight > heights[r][c]){
            return;
        }
        visited.insert({r,c});
        dfs(r+1,c,visited, heights[r][c], heights);
        dfs(r,c+1,visited, heights[r][c], heights);
        dfs(r,c-1,visited, heights[r][c], heights);
        dfs(r-1,c,visited, heights[r][c], heights);
        return;

    }
};
