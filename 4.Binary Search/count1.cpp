// problem link : sorted binary array, we have to count the number of 1s in the array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int count_one(vector<int> nums,int element = 1)
    {
        int first=-1;
        int start = 0;
        int end = nums.size()-1;
        while(start<=end)
            {   
                int mid = start+(end-start)/2;
                if(nums[mid] == element)
                    {
                        first = mid;
                        
                        end = mid-1;
                    }
                else if(nums[mid]<element)
                    {
                        start = mid+1;
                    }  
                else 
                    {
                        end = mid-1;
                    }              
            }
        if(first == -1) return 0;

        return nums.size()-first;
    }

int main()
    {
        vector<int> nums{0,0,0,0,1,1,1,1,1,1,1,1,1};
        cout<<count_one(nums);

        return 0;
    }