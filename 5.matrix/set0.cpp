//https:leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setRC0(vector<vector<int>> &matrix,pair<int,int> p)
    {
        cout<<p.first<<" "<<p.second<<endl;
        for(int i = 0; i <matrix[p.first].size(); i++)
        {
            matrix[p.first][i] = 0;
        }
        for(int i = 0; i <matrix.size(); i++)
        {
            matrix[i][p.second] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) 
    {
        //unordered_set<pair<int,int>> indices;
        vector<pair<int,int>> indices;
        for(int i = 0; i <matrix.size();i++)
        {
            for(int j = 0; j <matrix[i].size();j++)
            {
                if(matrix[i][j] == 0)
                    indices.push_back({i,j});
            }
        }
        for(auto it : indices)
        {
            setRC0(matrix, it);
        }
    }
};
