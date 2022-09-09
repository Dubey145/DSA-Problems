// problem link : https://leetcode.com/problems/unique-number-of-occurrences/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool uniqueOccurrences(vector<int>& nums) 
    {
        unordered_map<int,int> hesmep;
        for(int i = 0 ; i <nums.size();i++)
            {
                if(hesmep.find(nums[i]) != hesmep.end()) // if the key is present
                    {
                        hesmep.find(nums[i])->second++;
                    }
                else 
                    {
                        //element is not present so we create an entry in the hashmap
                        hesmep[nums[i]] = 1;
                    }
            }   
        for(auto it = hesmep.begin(); it!= hesmep.end()-1; it++)
            {
                int current = it->second;
                for(auto it2 = ++it; it2!= hesmep.end(); it2++)
                    {
                        if(it2->second == current && it2->first != it->first)
                            return false; 
                    }
            }
        return true; 
        //better approach - store the occurrences of elements in a vector and sort it, then check if there are any duplicated TC - O(nlogn) n is the number of keys 
    }
int main()
    {
        vector<int> nums{-3,0,1,-3,1,1,1,-3,10,0};
        // 10 1
        // 1 4
        // -3 3
        // 0 2
        uniqueOccurrences(nums);

        return 0;
    }