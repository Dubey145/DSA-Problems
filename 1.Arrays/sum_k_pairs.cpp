// problem link : https://leetcode.com/problems/max-number-of-k-sum-pairs/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxOperations(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int pairs = 0;
        int i =0 , j=nums.size()-1 ;
        while(i<j)
            {
                if((nums[i] + nums[j]) == k)
                    {
                        nums[i] = 0;
                        nums[j] = 0;
                        pairs++;
                        i++;j--;
                       
                    }
                else if((nums[i] + nums[j]) > k)
                    {
                        j--;
                    }
                else//sum is smaller than k
                    {
                        i++;
                    }
            }
        return pairs;
    }
int main()
    {
        vector<int> nums{1,2,4,5};
        int k = 6;
        cout<<maxOperations(nums,k);

        return 0;
    }