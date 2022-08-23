// problem link : https://leetcode.com/problems/reshape-the-matrix/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        vector<int> rows(c,0);
        vector<vector<int>> reshaped(r,rows);
        vector<int> elements;
        for(int i = 0 ; i <mat.size();i++)
            for(int j = 0 ; j<mat[i].size();j++)
                elements.push_back(mat[i][j]);


        for(int i = 0,k=0; i<r && k<elements.size();i++)
            for(int j = 0 ; j<c; j++)
                reshaped[i][j] = elements[k++] ; 

        return reshaped;
    }

int main()
    {
        vector<vector<int>> nums{{1,2},{3,4}};
        int r = 2;
        int c = 3;

        vector<vector<int>> reshaped = matrixReshape(nums,r,c);
        for(int i = 0; i<r ;i++)
            {
                cout<<endl;
                for(int j = 0 ; j<c;j++)
                    cout<<reshaped[i][j]<<" " ; 
            }
            

        

        return 0;
    }