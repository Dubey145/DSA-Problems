// problem link : kadnes algorithm vimp
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_subarr(vector<int> nums)
    {
        int max_sum = nums[0];
        int current_sum = nums[0];

        for(int i = 1; i< nums.size();i++)
            {
                current_sum = max(nums[i],current_sum+nums[i]);
                max_sum = max(current_sum,max_sum);
            }
        return max_sum;
    }

int main()
    {
        vector<int> nums{-3,8,-2,4,-5,6};
        cout<<max_subarr(nums);

        return 0;
    }