// problem link : https://leetcode.com/problems/xor-operation-in-an-array/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int xorOperation(int n, int start) 
    {
        vector<int> xOr;
        int current_xor=0;
        for(int i = 0; i < n; i++)
            {
                xOr.push_back(start + (2 * i));
                current_xor ^=xOr[i];
            }
        return current_xor;
    }

int main()
    {
        vector<int> nums{};


        return 0;
    }