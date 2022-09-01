// problem link : index of the first occurrence using binary search
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//always try to write iterative binary search as the recursive approach needs extra space.

int first_ocr(vector<int> &nums,int element)
    {
        int index=-1;
        int start = 0;
        int end = nums.size()-1;
        while(start<=end)
            {   
                int mid = start+(end-start)/2;
                if(nums[mid] == element)
                    {
                        index = mid;
                        
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
            
        return index;
    }

int main()
    {
        vector<int> nums{15,15,15};
        cout<<first_ocr(nums,15);

        return 0;
    }