// problem link : https://leetcode.com/problems/sum-of-unique-elements/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int sumOfUnique(vector<int>& nums) 
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
        int sum = 0;    
        for(auto it = hesmep.begin(); it!= hesmep.end(); it++)
            {
                if(it->second==1)
                    sum+=it->first;
            }
        return sum;
    }

int main()
    {
        vector<int> nums{};


        return 0;
    }