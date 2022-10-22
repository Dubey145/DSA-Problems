//https://leetcode.com/problems/battleships-in-a-board/

class Solution {
public:
    
    void move_row(int i, int j ,vector<vector<char>>& boards)
    {
        while(j!=boards[i].size())
        {
            if(boards[i][j] == 'X' || boards[i][j] == 'O' )
            {
                boards[i][j] = 'O';
            }
            else 
                break;
            j++;
        }
    }
    
    void move_col(int i, int j ,vector<vector<char>>& boards)
    {
        while(i!=boards.size())
        {
            if(boards[i][j] == 'X' || boards[i][j] == 'O' )
            {
                boards[i][j] = 'O';
            }
            else 
                break;
            i++;
        }
    }
    int countBattleships(vector<vector<char>>& boards) {
        int total = 0;
        for(int i = 0; i<boards.size();i++)
        {
            for(int j = 0; j <boards[i].size();j++)
            {
                if(boards[i][j] =='X')
                {
                    move_row(i,j,boards);
                    move_col(i,j,boards);
                    total++;
                }
            }
        }
        return total;
    }
};
