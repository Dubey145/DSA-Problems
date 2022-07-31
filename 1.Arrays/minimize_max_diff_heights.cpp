//https://www.geeksforgeeks.org/minimize-the-maximum-difference-between-the-heights/
#include<iostream>
#include<algorithm>
#include<math>
#include<vector>
using namespace std;

int getMinDifference(vector<int> &nums, int k)  
    {
        int result = 0;
        sort(nums.begin(),nums.end());

        int pivot = nums.size()/2;

        for(int i =0 ;i<nums.size();i++)
            {
                if(i<pivot)
                    {
                        nums[i]+=k;
                    }
                else if(i == pivot)
                    {
                        if(nums[i]-k>0) nums[i]-=k;
                        else nums[i] += k;
                    }
                else //i>pivot
                    {
                        nums[i] -=k;
                    }

            }
        result = nums[nums.size()-1] - nums[0];

        return result;
    }

int getMinDifference(vector<int> &nums, int k)  
    {   

        sort(nums.begin(),nums.end());
        int min,max;
        int diff = nums[nums.size()-1]-nums[0];

        int ma,mi;

        for(int i = 1; i<nums.size();i++)
            {
                if(nums[i]-k<0) continue;

                ma = max(nums[i-1],nums[nums.size()-1]-k);
                mi = min(nums[0]+k,nums[i]-k);

                diff = min(diff,max-min)

            }

        return diff;
    }


int main()
    {
        vector<int> nums{3,9,12,16,20};
        int k = 3;
        cout<<getMinDifference(nums,k);
        return 0;
    }