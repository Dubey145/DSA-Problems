// problem link : https://leetcode.com/problems/maximum-average-subarray-i/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) 
    {
        double current_average = 0.0;
        double max_average = 0.0;

        double sum = 0.0;

        for(int i = 0 ; i < k ; i++)
            {
                sum+=nums[i];
            }
        current_average = sum/k;
        max_average = max(current_average,max_average);
        
        for(int i = k ; i <nums.size(); i++)
            {
                sum -= nums[i-k];
                sum += nums[i+k];
                current_average = sum/k;
                max_average = max(max_average,current_average);
            }
        return max_average;
    }
int main()
    {
        vector<int> nums{1,12,-5,-6,50,3};
        cout<<findMaxAverage(nums,4);

        return 0;
    }