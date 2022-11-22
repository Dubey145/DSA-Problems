//https://leetcode.com/problems/max-area-of-island

class Solution {
public:
    int maxArea = 0;
    int currentArea = 0;
    void dfs(vector<vector<int>> &grid, int i, int j)
    {
        int row = grid.size();
        int col = grid[0].size();
        if(i>=row || i<0 || j>=col || j<0) return;
        else if(grid[i][j] == 0) return;
        
        if(grid[i][j] == 1)
        {
            currentArea++;
            grid[i][j] = 0;
        }
        
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        //first find a 1 
        for(int i = 0; i<grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] == 1)
                {
                    currentArea = 0;
                    dfs(grid,i,j);
                    maxArea = max(maxArea,currentArea);
                }
            }
        }
        return maxArea;
    }
};
