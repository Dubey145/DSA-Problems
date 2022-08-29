// problem link : really?
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rainwater(vector<int> nums)
    {
        //brute force approach O(n^2) - for every element we calculate the left_max and right max , and the we find the amt of water it can store

        int max_water = 0;
        for(int i = 1; i <nums.size()-1;i++) // left most and right most cannot store any water so we iterate for the middle elements
            {
                //assume lmax is nums[i]
                int lmax = nums[i];
                for(int j = 0; j <i; j++)
                    lmax = max(lmax,nums[j]);
                
                int rmax = nums[i];
                for(int j = i+1 ; j<nums.size();j++)
                    rmax = max(rmax,nums[j]);
                
                max_water += min(lmax,rmax) - nums[i];
            }
        return max_water;

    }

int better_rainwater(vector<int> nums)
    {
        int max_water = 0;
        vector<int>rmax(nums.size());
        vector<int>lmax(nums.size());

        lmax[0] = nums[0];
        for(int i = 1 ; i <nums.size();i++)
            {
                lmax[i] = max(nums[i],lmax[i-1]); 
            }

        rmax[nums.size()-1] = nums[nums.size()-1];
        for(int i = nums.size()-2 ; i>=0 ;i--)
            {
                rmax[i] = max(nums[i],rmax[i+1]); 
            }
        
        for(int i = 1; i < nums.size()-1; i++)
            {
                max_water += (min(lmax[i],rmax[i]) - nums[i]); 
            }
        return max_water;
    }


int main()
    {
        vector<int> nums{3,0,1,2,5};

        cout<<better_rainwater(nums);

        return 0;
    }