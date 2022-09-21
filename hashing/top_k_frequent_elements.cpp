#include<iostream>
#include<unordered_map>
using namespace std;

// https://leetcode.com/problems/top-k-frequent-elements/

vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int>result;
        if(nums.size() == 1)
        {
            result.push_back(nums[0]);
            return result;
        }
        unordered_map<int,int> map;
        for(int number : nums)
            {
                map[number]++;
            }    
        
        vector<vector<int>> matrix;
        for(auto it: map)
            {
                cout<<it.second<<" "<<it.first<<endl;
                matrix.push_back({it.second, it.first});
            }
        sort(matrix.begin(), matrix.end());
        
        int i = 1;
        while(i<=k)
        {
            result.push_back(matrix[matrix.size()-i][1]);
            i++;
        }
        
        return result;
    }

int main()
    {
        vector<int> nums{1,1,1,2,2,3}
        vector<int> result = topKFrequent(nums);

        for(int number : result)
            {
                cout<<result<<" ";
            }

        return 0;
    }