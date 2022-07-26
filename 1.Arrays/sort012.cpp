// sort 0 1 2 
#include<iostream>
#include<vector>
using namespace std;

vector<int> sortColors(vector<int>& nums) 
    {
        //o(n) TC with O(n) SC
        int size = nums.size();
        vector<int> result(size,1);
        
        int start = 0 ;
        int end = size-1;

        for(int i = 0;i<size;i++)
            {
                if(nums[i] == 0)
                    {
                        result[start++] = 0;
                    }
                else if(nums[i] == 2)
                    {
                        result[end--] = 2;
                    }
            }
            nums = result;
            return nums;

    }
vector<int> optimized(vector<int> &nums)
    {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while(mid<=high)
            {
                if(nums[mid] == 0)
                    {
                        swap(nums[low],nums[mid]);
                        low++;
                        mid++;
                    }
                else if(nums[mid] == 1)
                    {
                        mid++;
                    }
                else 
                    {
                        swap(nums[high],nums[mid]);
                        high--;
                    }
            }
        return nums;

    }
int main()
    {
        vector<int> nums{0,1,2,0,1,2};

        nums = optimized(nums);

        for(int i = 0; i<nums.size();i++)
            {
                cout<<nums[i]<<" ";
            }
        return 0;
    }