//https://leetcode.com/problems/score-after-flipping-matrix/

class Solution {
public:
    void switchRow(vector<vector<int>> &grid, int row)
    {
        for(int i = 0; i< grid[row].size();i++)
        {
            grid[row][i] = !grid[row][i];
        }
    }
    void switchCol(vector<vector<int>> &grid, int col)
    {
        for(int i = 0; i<grid[0].size();i++)
        {
            grid[i][col] = !grid[i][col];
        }
    }
    
    int getScore(vector<vector<int>>grid)
    {
        int score = 0;
        for(int i = 0; i<grid.size();i++)
        {
            for(int j = 0; j<grid[i].size();j++)
            {
                if(grid[i][j] == 1)
                {
                    int power = grid[i].size()-j-1;
                    score += pow(2,power);
                }
            }
        }
        return score;
    }
    int matrixScore(vector<vector<int>>& grid) {
        //switch all rows that have 0 bit in grid[i][0]
        for(int i = 0; i<grid.size();i++)
        {
            if(grid[i][0] == 0)
                switchRow(grid,i);
        }
        
        for(int j = 1 ; j<grid[0].size();j++)
        {
            //count ones;
            int ones = 0;
            for(int i = 0; i<grid.size();i++)
            {
                if(grid[i][j] == 1)
                    ones++;
            }
            if(ones<=(grid.size()/2))
                for(int i = 0; i<grid.size();i++)
                {
                    grid[i][j] = !grid[i][j];
                }
        }
        
        return getScore(grid);
    }
};
