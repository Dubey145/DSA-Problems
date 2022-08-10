//https://leetcode.com/problems/island-perimeter/submissions/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int answer = 0;
        for(int r=0;r<grid.size();r++)
            {
            for(int c=0;c<grid[0].size();c++)
                {
                    if(grid[r][c] == 0) continue;
                    int p = 4;

                    if(r - 1 >=0 && grid[r-1][c] == 1) 
                            p--;


                    if(r + 1 < grid.size() && grid[r+1][c] == 1) 
                            p--;


                    if(c - 1 >=0 && grid[r][c-1] == 1) 
                            p--;

                    if(c + 1 < grid[0].size() && grid[r][c+1] == 1) 
                            p--;

                    answer += p;
            }
        }
        return answer;
    }
};