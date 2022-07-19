// https://leetcode.com/problems/find-peak-element/
//pending
#include<iostream>
#include<vector>

using namespace std;

int findPeakElement(vector<int>& nums)
    {
       int size = nums.size();
       if(size == 0) return s0;
        if(size > 2)
        {    
            for(int i = 1; i < size-1; i++)
                {
                    if((nums.at(i) > nums.at(i-1)) && (nums.at(i) > nums.at(i+1))) 
                        {
                            return i;
                        }
                }
        }
        else if(nums.at(size-1) > nums.at(size-2))
        {
            return size-1;
        }
        else
            return 0;
        
    }
    
int main()
    {
        vector<int> nums;
        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(1);
        nums.push_back(3);
        nums.push_back(5);
        nums.push_back(6);
        nums.push_back(4);

        cout<<findPeakElement(nums);
        return 0;
    }