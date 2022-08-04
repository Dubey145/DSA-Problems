//problem link ; 

#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> result(2,-1);
        //search element using binary search 
        int possible_start = -1;
        int possible_end = -1;
        int start = 0;
        int end = nums.size()-1;

        while(start <= end)
            {
                int mid = start + (end-start)/2;

                if(nums[mid] == target) 
                    {
                        possible_start = mid;
                        end = mid - 1; // will search in the left side for the first occurance
                    }
                else if( target>nums[mid]) 
                    {
                        start = mid + 1;
                    }
                else 
                    {
                        end = mid -1;
                    }
            }
        result[0] = possible_start;
        
        start = 0;
        end = nums.size()-1;
         while(start <= end)
            {
                int mid = start + (end-start)/2;

                if(nums[mid] == target) 
                    {
                        possible_end = mid;
                        start = mid + 1; // will search in the left side for the first occurance
                    }
                else if( target>nums[mid]) 
                    {
                        start = mid + 1;
                    }
                else 
                    {
                        end = mid -1;
                    }
            }
        result[1] = possible_end;
        return result;

    }
int main()
    {
        //sorted in ascending order;
        vector<int> nums;
        nums.push_back(5);
        nums.push_back(7);
        nums.push_back(7);
        nums.push_back(8);
        nums.push_back(8);
        nums.push_back(10);

        int target = 8;
        vector<int> result;
        result = searchRange(nums, target);

        for(int i = 0 ; i < result.size(); i++) 
            {
                cout<<result[i];
            }

        return 0;

    }