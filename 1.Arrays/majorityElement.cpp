// https://leetcode.com/problems/majority-element/

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) 
    {
        //sort and count, if count> n/2 return element;
         int size = nums.size();
        int target = (size/2);

        sort(nums.begin(),nums.end());
        
        int counter = 1;

        for(int i = 1; i <size; i++)
            {
                if(nums[i] == nums[i-1])
                    {
                        counter++;
                    }
                else if(counter>target)
                    {
                        return nums[i-1];
                    }
                else
                    {
                        counter = 1;
                    }
            }
        return nums[size-1]; 

        //solved but not optimized
        //SC is constant but sorting takes O(nlogn) TC
    }
int betterMajority(vector<int>& nums) 
    {
        // much better TC-o(N) and constant space;
        int count = 0;
        int candidate = 0;

        for(int i = 0 ; i<nums.size();i++)
            {
                if(count == 0)
                    {
                        candidate = nums[i];
                    }
                if(nums[i] == candidate)
                    {
                        count++;
                    }
                else 
                    {
                        count--;
                    }
            }
        return candidate;
    }

int main()
    {
        vector<int> nums{2,2,1,1,1,2,2};
        cout<<majorityElement(nums);
    }