// problem link : https://leetcode.com/problems/richest-customer-wealth/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) 
    {
        int max_wealth = 0;
        for(int i = 0 ; i<accounts.size();i++)
            {
                int sum = 0;
                for(int j = 0; j <accounts[i].size();j++)
                    {
                        sum+=accounts[i][j];
                    }
                max_wealth = max(sum,max_wealth);//?sum:max;
            }
        return max_wealth;
    }
int main()
    {
        vector<vector<int>> nums{{1,5},{7,3},{3,5}};

        cout<<maximumWealth(nums);


        return 0;
    }