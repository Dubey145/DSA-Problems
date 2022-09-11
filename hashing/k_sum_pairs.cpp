// problem link : https://leetcode.com/problems/max-number-of-k-sum-pairs/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int maxOperations(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mep;
        for(int number : nums)
            {
                mep[number]++;
            }
        
        int result;

        for(auto it : mep)
            {
                if(mep.find(k-it.first) != mep.end() && mep[it.first]!=0)
                    {
                        if(k = 2*it.first)
                            {
                                mep[it.first]-=2;
                                result++;
                            }
                        else
                            {
                                mep[it.first]--;
                                mep[k-it.first]--;
                                result++;
                            }
                    }
            }
        return result;
    }
//to see if the sum if possible 
bool pair_with_k(vector<int> nums, int k)
    {
        unordered_set<int>set;
        for(int i = 0 ; i < nums.size(); i++)
            {
                if(set.find(k-nums[i]) != set.end())
                    {
                        return  true;
                    }
                //if the element is not present insert it so that the coming elemnts can be paired with it
                else 
                    set.insert(nums[i]);
            }
        return false;
    }
int operations(vector<int> nums, int k)
    {
        unordered_map<int,int> map;
        int counter = 0;

        for(int i = 0; i < nums.size();i++ )
            {
                if(map[k-nums[i]]==0)
                    {
                        map[nums[i]]++;
                    }
                else 
                    {
                        counter++;
                        map[k-nums[i]]--;
                    }
            }
        return counter;
    }
int main()
    {
        vector<int> nums{3,2,8,15,-8};
        cout<<operations(nums,17);

        return 0;
    }