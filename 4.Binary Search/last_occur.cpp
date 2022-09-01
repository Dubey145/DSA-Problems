// problem link : index of the last occurrence using binary search
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

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
                        
                        start = mid+1;
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
        vector<int> nums{10,15,15,15,20,20,40};
        cout<<first_ocr(nums,20);

        return 0;
    }