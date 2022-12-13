//https://leetcode.com/problems/minimum-falling-path-sum

class Solution {
public:
    int dp[101][101];
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        for(int i = 0; i < n ; i++) dp[0][i] = matrix[0][i];

        for(int i = 1; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                    {
                        int minValue = INT_MAX;

                        //get values for up, up-left, up-right
                        
                        //up
                        
                        if(i-1 >= 0) minValue = min(minValue, dp[i-1][j]);
                        
                        //up left
                        if(i-1>=0 && j-1 >= 0) minValue = min(minValue, dp[i-1][j-1]);
                        //up-right
                        if(i-1 >= 0 && j+1 <n) minValue = min(minValue, dp[i-1][j+1]);

                        //cout<<minValue;
                        dp[i][j] = minValue + matrix[i][j];
                    }
            }

        int result = dp[n-1][0];
        for(int i = 1; i < n; i++)
            {
                result = min(result, dp[n-1][i]);
            }
        return result;
    }
};
