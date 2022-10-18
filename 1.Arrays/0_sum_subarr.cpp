// problem link : 

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

bool zero_sub(vector<int> &nums)
    {
        unordered_set<int> set;
        int prefix_sum = 0;

        for(int i = 0 ; i < nums.size(); i++)
            {
                prefix_sum += nums[i];
                if(prefix_sum == 0)
                    return true;
                if(set.find(prefix_sum) != set.end())
                    return true;
                set.insert(prefix_sum);
            }
        return false;
    }

int main()
    {
        vector<int> nums{3,4,3,1,0};
        cout<<zero_sub(nums);
        return 0;
    }
