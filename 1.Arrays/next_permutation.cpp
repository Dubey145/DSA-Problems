//https://leetcode.com/problems/next-permutation/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) 
    {
        int size = nums.size(),i,j;
        for(int i = size-2; i>=0;i--) // finding an element that has lesser value than k+1
            {
                if(nums[i]<nums[i+1])
                    {
                        break;
                        //k has the required index 
                    }
            }
        if(i<0)
            {
                //nums was in reverse order i.e 5 4 3 2 1 
                // reverse
                reverse(nums.begin(),nums.end());
            }
        else
            {
                //find the index of the element which has greater value than the element at index i 
                for(j = size-1;j>i;j--)
                    {
                        if(nums[i]<nums[j])
                            break;
                    } 
            }
        //swap elements at i and j and reverse everything in between
        swap(nums[i],nums[j]);
        reverse(nums.begin()+i+1,nums.end());
    }

int main()
    {
        vector<int> nums{1,1,5};
        nextPermutation(nums);
        return 0;
    }
