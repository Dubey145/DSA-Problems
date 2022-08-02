// problem link : https://leetcode.com/problems/smallest-index-with-equal-value/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int smallestEqual(vector<int>& nums) 
    {
        
        for(int i = 0 ; i <nums.size();i++) 
            {
                if(i%10 == nums[i])
                    return i;
            }

    }

int main()
    {
        vector<int> nums{};


        return 0;
    }