// problem link : https://leetcode.com/problems/min-cost-climbing-stairs/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minCostClimbingStairs(vector<int>& cost)   
    {
        int i = 0, j = 1;
        int size = cost.size();
        int min_value = min(cost[i],cost[j]);
        int start_index = min_value == cost[i]?i:j;
        
        i+=2;
        j+=2;

        int min_cost = 0;
        int jump_index = 0;
        while(i<size && j <size)
            {
                int next_min = min(cost[i],cost[j]);
                //check min of next 2
                min_cost = cost[jump_index] + min(cost[jump_index+1],cost[jump_index+2]);

                //new jump_index


            //pending DP req.

            }
    }
int main()
    {
        vector<int> nums{};
        cout<<minCostClimbingStairs(nums)<<endl;

        return 0;
    }