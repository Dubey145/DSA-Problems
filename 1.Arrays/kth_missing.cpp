// problem link : https://leetcode.com/problems/kth-missing-positive-number/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findKthPositive(vector<int>& nums, int k) 
    {
        //o(n) with extra space
        vector<int> tracker(nums[nums.size()-1]+k,0);
        for(int i = 0 ; i < nums.size();i++)
            {
                tracker[nums[i]-1] = nums[i];
            } 
        
        int counter = 0;
        for(int i = 0 ; i < tracker.size();i++)
            {
                if(tracker[i] == 0)
                    counter++;
                    if(counter == k)
                        return i+1;
            }
        return 0;
    }
int main()
    {
        vector<int> nums{2,3,4,7,11};
        cout<<findKthPositive(nums,5);

        return 0;
    }