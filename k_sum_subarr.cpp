// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

bool k_sum(vector<int> &nums,int k)
    {
        unordered_set<int>set;
        int prefix_sum = 0;

        for(int i = 0 ; i < nums.size(); i++)
            {
                //prefix_sum+=nums[i];
                if(prefix_sum == k || nums[i] == k)
                    return true;
                prefix_sum+=nums[i];

                if(set.find(prefix_sum-k) != set.end())
                    return true;
                set.insert(prefix_sum);
            }
        return false;
    }

int main()
    {
        vector<int> nums{15,2,8,10,-5,-8,6};
        nums = {5,8,6,13,3,-1};
        cout<<k_sum(nums,0);
        return 0;
    }