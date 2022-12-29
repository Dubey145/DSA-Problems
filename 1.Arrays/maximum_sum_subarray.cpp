//https://leetcode.com/problems/maximum-subarray/
//solved using kadne's algorithm
//keep tracking current sum if it becomes less than one discard it and start all over again


#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int> nums)
    {
        int current_sum = 0;
        int max_sum = INT_MIN;
        for(int i = 0 ; i<nums.size(); i++)
            {
                current_sum += nums[i];

                if(current_sum > max_sum)
                    {
                        max_sum = current_sum;
                    }
                if(current_sum<0)
                    {
                        current_sum = 0;
                    }
            }
        return max_sum;
    }

int main()
    {
        vector<int> nums{5,4,-1,7,8};
        
        cout<<maxSubArray(nums);
    }
    
