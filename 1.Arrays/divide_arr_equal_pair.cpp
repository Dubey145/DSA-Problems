// problem link : https://leetcode.com/problems/divide-array-into-equal-pairs/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divideArray(vector<int>& nums) 
    {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 1; i < size; i +=2)
            {
                if(nums[i] != nums[i-1])
                    return false;
            }
        return true;
    }
int main()
    {
        vector<int> nums{3,2,3,2,2,2};
        cout<<divideArray(nums);

        return 0;
    }