// https://leetcode.com/problems/rotate-array/

#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) 
    {
        int size = nums.size();
        vector<int> result(size);
        int index;
        for(int i = 0 ;i < nums.size() ;i++)
            {
                index = (i+k)%size;
                result.at(index) = nums.at(i);
            }
        nums = result;
        for(int i = 0 ; i < nums.size() ; i++)
            {
                cout<<nums.at(i);
            }

    }

int main()
    {
        vector<int> nums;
        int k = 3;
        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(3);
        nums.push_back(4);
        nums.push_back(5);
        nums.push_back(6);
        nums.push_back(7);

        rotate(nums,k);

        return 0; 
    }