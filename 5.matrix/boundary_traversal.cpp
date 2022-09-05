// problem link : boundary traversal - print the boundary elements of the matrix -- TC = O(r+c)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void boundaryTraversal(vector<vector<int>> nums)
    {
        //handle edge case of single row or single column
        //matrices are assumed to have equal number of elements in rows 

        if(nums.size() == 1) // only one row
            {
                for(int i = 0 ; i < nums[i].size(); i++)
                    {
                        cout<<nums[0][i];
                    }
                return;
            }
        if(nums[0].size() == 1) // only one column 
            {
                for(int i = 0 ; i < nums.size(); i++)
                    {
                        cout<<nums[i][0];
                    }
                return;
            }

        for(int i = 0 ; i < nums.size();i++)
            {
                cout<<nums[0][i]<<" ";
            }
        cout<<endl;
        for(int i = 1 ; i < nums.size();i++)
            {
                cout<<nums[i][nums.size()-1]<<" ";
            }
        cout<<endl;
        for(int i = nums.size()-2 ; i >= 0 ; i--)
            {
                cout<<nums[nums.size()-1][i]<<" ";
            }
        cout<<endl;
        for(int i = nums.size()-1 ; i >0;i--)
            {
                cout<<nums[i][0]<<" ";
            }
        cout<<endl;
    }

int main()
    {
        vector<vector<int>> nums{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        nums = {{1},{2},{3},{4}};
        boundaryTraversal(nums);


        return 0;
    }
