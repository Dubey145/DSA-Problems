// problem link : https://leetcode.com/problems/max-consecutive-ones/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int result =  0;
        int current_max = 0;
        
        for(int i = 0 ; i<nums.size();i++)
            {
                if(nums[i] == 1)
                    {
                        current_max++;
                        result = max(current_max,result);
                    }
                else
                    {
                        current_max = 0;
                    }

            }
        return result;
    }
int main()
    {
        vector<int> nums{1,1,0,1,1,1};
        cout<<findMaxConsecutiveOnes(nums);

        return 0;
    }