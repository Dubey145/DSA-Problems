//https://leetcode.com/problems/valid-sudoku

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //row column and box
        unordered_set<string> seen;
        for(int i = 0; i<9 ; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                int box_number = (i/3)*3 + (j/3);
                string row = to_string(i);
                string col = to_string(j);
                string box_no = to_string(box_number);
                if(board[i][j] != '.')
                {
                    if(seen.find("row"+row+board[i][j]) != seen.end() || seen.find("col"+col+board[i][j]) != seen.end() || seen.find("box"+box_no+board[i][j]) != seen.end() )
                        return false;
                    else 
                    {
                        seen.insert("row"+row+board[i][j]);
                        seen.insert("col"+col+board[i][j]);
                        seen.insert("box"+box_no+board[i][j]);
                    }    
                }      
            }
        }
        return true;
    }
};
