//https://leetcode.com/problems/single-element-in-a-sorted-array/

#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) 
    {
        int start = 0;
        int end = nums.size()-1;
        int key_element = -1;
        //lets search in 2 halves of the array
        while(start<=end)
            {
                int mid = start + (end - start)/2;

                if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
                    {
                        key_element = nums[mid];
                    }
                else if(element>nums[mid])
                    {
                        start = mid+1;
                    }
                else 
                    {
                        end = mid-1;
                    }
            }
        if(key_element = -1)
        return -1;    
    }


int main() 
    {

        return 0;
    }