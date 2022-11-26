//https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/


class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {
        int rows = grid.size();
        int cols = grid[0].size();
        
        vector<int> oneRows(rows);
        vector<int> zeroRows(rows);
        
        vector<int> oneCols(cols);
        vector<int> zeroCols(cols);
        
        for(int i = 0; i< rows; i++)
        {
            for(int j = 0; j<cols; j++)
            {
                if(grid[i][j] == 1)
                {
                    oneRows[i]++;
                    oneCols[j]++;
                }
                
                else
                {
                    zeroRows[i]++;
                    zeroCols[j]++;
                }
            }
        }
        vector<vector<int>> difference(rows,vector<int>(cols));
        
        for(int i = 0; i<rows;i++)
        {
            for(int j = 0; j<cols; j++)
            {
                difference[i][j] = oneRows[i]+oneCols[j]-zeroRows[i]-zeroCols[j];
            }
        }
        return difference;
    }
};
