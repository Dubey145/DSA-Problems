// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_Set>
using namespace std;

bool sub0(vector<int>&nums)
    {
        //unordered_map<>
    }
bool sub0_brute(vector<int> &nums)
    {
        for(int i = 0; i < nums.size(); i++)
            {
                int current_sum;
                for(int j = i; j<nums.size(); j++)
                    {
                        current_sum += nums[i];
                        if(current_sum == 0)
                            {
                                return true;
                            }
                    }
            }
        return false;
    }
bool suB0(vector<int> nums)
    {
        unordered_set<int> set;
        int prefix_sum = 0;
        for(int i = 0; i < nums.size();i++)
            {
                prefix_sum += nums[i];
                if(set.find(prefix_sum) != set.end())
                    {
                        //prefix sum appears again
                        return true;
                    }
                else 
                    set.insert(nums[i]);
            }
        return false;
    }

int main()
    {
        vector<int> nums{};


        return 0;
    }