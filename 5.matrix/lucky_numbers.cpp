// problem link : https://leetcode.com/problems/lucky-numbers-in-a-matrix/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> luckyNumber(vector<vector<int>>& nums) 
    {
        // int rows = nums.size();
        // int columns = nums[0].size();
        vector<int> row_min;
        vector<int> col_max;
        vector<int> lucky_numbers;
        for(int i = 0; i < nums.size() ; i++)
            {
                //lets calculate the min element for every row
                int min_ele = INT_MAX;
                for(int j = 0 ; j < nums[i].size() ; j++)
                    {
                        min_ele = min(nums[i][j],min_ele);
                    }
                row_min.push_back(min_ele);                
            }
            for(int i = 0 ; i < nums[i].size();i++)
                {
                    int max_ele = INT_MIN;
                    for(int j = 0 ; j < nums.size(); j++)
                        {
                            max_ele = max(max_ele,nums[j][i]);
                        }
                    col_max.push_back(max_ele);
                }
            // 1 10 4 2
            // 9 3  8 7
            // 15 16 17 12
        for(int i = 0; i<row_min.size();i++)
            for(int j = 0;j<col_max.size();j++)
                if(row_min[i] == col_max[j])
                    lucky_numbers.push_back(row_min[i]);
        
        return lucky_numbers;
        //pending
    }

int main()
    {
        vector<vector<int>> nums{{1,10,4,2},{9,3,8,7},{15,16,17,12}};
        
        vector<int> result = luckyNumber(nums);
        for(int i = 0 ; i < result.size();i++)
            {
                cout<<result[i]<<" ";
            }

        return 0;
    }