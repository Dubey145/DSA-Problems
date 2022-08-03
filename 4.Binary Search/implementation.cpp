#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int> nums,int element) 
    {
        int start = 0;
        int end = nums.size()-1;
        //int mid = (start + end)/2; to avoid start+end having a value greater
        //so we write the formula for calculating mid as a 
        int mid = start + (end - start)/2;

        while(start<end)
            {
                if(nums[mid] == element)
                    {
                        return mid;
                    }
                if(element>nums[mid])
                    {
                        start = mid+1;
                        int mid = start + (end - start)/2;
                    }
                else 
                    {
                        end = mid-1;
                        int mid = start + (end - start)/2;
                    }
            }
        return -1;
     }

int main()
    {
        vector<int> nums(10,0);
        int element = 8;
        for(int i = 0; i < nums.size(); i++)
            {
                nums[i] = i+1;
                cout<<nums[i]<<endl;
            }

        cout<<endl<<binary(nums,element);
    }