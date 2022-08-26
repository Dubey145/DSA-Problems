// problem link : https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findKDistantIndices(vector<int>& nums, int key, int k) 
    {
        vector<int> result;
        for(int i = 0; i<nums.size() ; i++)
            {
                for(int j = i; j<nums.size();j++)
                    {
                        if(abs(i-j)<=k && nums[j]==key)
                            {
                                result.push_back(i);
                            }
                    }
            }
        return result;//incorrect
        
    }
int main()
    {
        vector<int> nums{3,4,9,1,3,9,5};
        vector<int> result = findKDistantIndices(nums,9,1);
        for(int i = 0; i < result.size();i++)
            {
                cout<<result[i]<<" ";
            }

        return 0;
    }