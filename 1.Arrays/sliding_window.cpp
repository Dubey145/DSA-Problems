// problem link : sliding window
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//find max sum of k consec elements
int maxSum(vector<int> &nums, int k)
    {
        int start = 0;
        int max_sum  = INT_MIN;
        int sum = 0;
        for(int i = 0; i < k; i++)
            {
                sum +=nums[i];
            }
        max_sum = sum;
        for(int i = k; i < nums.size(); i++)
            {
                sum-=nums[start];
                start++;
                sum+=nums[i];
                //or sum+=(nums[i] - nums[i-k]);
                max_sum = max(max_sum,sum);
            }
        return max_sum;
    }

int main()
    {
        vector<int> nums{1,8,30,-5,20,7};
        cout<<maxSum(nums,4);


        return 0;
    }