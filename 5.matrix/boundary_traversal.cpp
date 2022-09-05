// problem link : boundary traversal - print the boundary elements of the matrix
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void boundaryTraversal(vector<vector<int>> nums)
    {
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
        boundaryTraversal(nums);


        return 0;
    }