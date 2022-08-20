// problem link : https://leetcode.com/problems/maximum-ascending-subarray-sum/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxAscendingSum(vector<int>& nums) 
    {
        //ez   
        if(nums.size()<=1) return nums[0];
        int current_sum = nums[0];
        int max_sum = 0;
        for(int i = 1 ; i <nums.size();i++)
            {
                if(nums[i-1]>= nums[i])
                    {
                        max_sum = max(current_sum,max_sum);
                        current_sum = 0;
                    }
                current_sum += nums[i];
                max_sum = max(current_sum, max_sum);
            }
        return max_sum;
    }

int main()
    {
        vector<int> nums{100,10,1};
        cout<<maxAscendingSum(nums)<<endl;

        return 0;
    }