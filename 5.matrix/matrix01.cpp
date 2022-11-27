//https://leetcode.com/problems/01-matrix/


class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int rows = mat.size();
        int cols = mat[0].size();
        
        vector<vector<int>> visited(rows,vector<int>(cols));
        vector<vector<int>> updated(rows,vector<int>(cols));
        
        queue<pair<pair<int,int>,int>>q;
        
        for(int i = 0; i<mat.size();i++)
        {
            for(int j = 0; j<mat[i].size();j++)
            {
                if(mat[i][j] == 0)
                {
                    q.push({{i,j},0});
                    visited[i][j] = 1;
                    
                }
            }
        }
        
        
        int delrow[] = {-1,1,0,0};
        int delcol[] = {0,0,1,-1};
        
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            
            updated[row][col] = steps;
            
            for(int i = 0; i<4;i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow<rows && nrow>=0 && ncol<cols && ncol>=0  && visited[nrow][ncol] == 0)
                {
                    visited[nrow][ncol] = 1;
                    q.push({{nrow,ncol},steps+1});
                }
            }
        }
        
        return updated;
        
    }
};
