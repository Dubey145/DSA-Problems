// problem link : https://leetcode.com/problems/most-frequent-even-element/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int mostFrequentEven(vector<int>& nums) 
    {
        unordered_map<int,int>map;
        for(int number : nums)
            {
                if(number%2 == 0) map[number]++;
            }
        if(map.size() == 0) return -1;

        int max_val = INT_MIN;
        int max_key = INT_MIN;
        for(auto it : map)
            {
                if(it.second>max_val) 
                    {
                        max_val = it.second;
                        max_key = it.first;
                    }
                if(it.second == max_val)
                    {
                        max_key = min(it.first,max_key);
                    }
            }
        return max_key;
    }
int main()
    {
        vector<int> nums{};


        return 0;
    }