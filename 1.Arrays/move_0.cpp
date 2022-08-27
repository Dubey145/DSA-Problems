// problem link : //move 0 to the end
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rearrange(vector<int> &nums)
    {
        int i = 0 ,j = 1;
        while(j<nums.size())
            {
                if(nums[i]!=0)
                    {
                        i++;
                        j++;
                    }
                if(nums[i] == 0 && nums[j]!=0)
                    {
                        swap(nums[i],nums[j]);
                    }
                else 
                    j++;
            }
        return nums;
    }
vector<int> rearrange2(vector<int> nums)
    {
        int count = 0;
        for(int i = 0 ; i <nums.size();i++)
            {
                if(nums[i] != 0)
                    {
                        swap(nums[i],nums[count]);
                        count++;
                    }
            }
        return nums;
    }
int main()
    {
        vector<int> nums{1,2,0,0,4,8,0};
        nums = rearrange(nums);
        for(int i = 0 ; i <nums.size();i++)
            {
                cout<<nums[i]<<" ";
            }

        return 0;
    }