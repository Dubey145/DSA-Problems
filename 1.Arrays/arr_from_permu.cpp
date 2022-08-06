// problem link : https://leetcode.com/problems/build-array-from-permutation/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<int> buildArray(vector<int>& nums) 
    {
        //meh noob prob for da prozz
        vector<int> ans(nums.size());
        for(int i = 0; i < nums.size();i++)
            {
                ans[i] = nums[nums[i]];
            }
        return ans;
    }           

int main()
    {
        vector<int> nums{};


        return 0;
    }