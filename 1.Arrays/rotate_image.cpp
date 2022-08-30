//leetcode : https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // ^w^ lets transpose the matrix first 
        
        for(int i = 0 ; i < matrix.size();i++)
            for(int j = i ; j < matrix.size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        
        //^w^ time 2 reverse ^w^
        
        for(int i = 0 ; i <matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        //az ez az 1 2 3 z
        //spidar sen kat dog
    }
};
