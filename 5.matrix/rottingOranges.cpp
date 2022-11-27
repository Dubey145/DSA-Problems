//https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();
        
        vector<vector<int>> visited(rows,vector<int>(cols));
        int time = 0;
        int fresh= 0;
        queue<pair<pair<int,int>,int>>q;
        
        for(int i = 0; i<rows;i++)
        {
            for(int j = 0; j<cols;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i,j},0});
                    visited[i][j] = 1;
                }
                else if(grid[i][j]==1)
                    fresh++;
            }
        }
        
        int delrow[] = {1,-1,0,0};
        int delcol[] = {0,0,1,-1};
        
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            time = q.front().second;
            q.pop();
            for(int i = 0; i<4;i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow<rows && nrow>=0 && ncol<cols && ncol>=0  && visited[nrow][ncol] == 0)
                {
                    visited[nrow][ncol] = 1;
                    
                    if(grid[nrow][ncol] == 1)
                    {
                        q.push({{nrow,ncol},time+1});
                        fresh--;
                    }
                }
            }
        }
        if(fresh == 0)
            return time;
        else 
            return -1;
    }
};
