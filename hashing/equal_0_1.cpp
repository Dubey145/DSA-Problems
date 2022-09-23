// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int longest_0_1(vector<int> &nums)
    {
        int max_length = 0;

        //if we replace every 0 with -1 the problem becomes - longest subarray with 0 sum 
        for(int number : nums) 
            {
                if(number == 0) number = -1;
                cout<<number<<" ";
            }
        

        int prefix_sum = 0;
        unordered_map<int,int>map;

        for(int i = 0 ; i<nums.size();i++)
            {
                prefix_sum+=nums[i];
                if(prefix_sum == 0)
                    max_length=i+1;
                else if(map.find(prefix_sum) == map.end())
                    {
                        map.insert({prefix_sum,i});
                    }
                else if(map.find(prefix_sum) != map.end())
                    {
                        max_length = max(max_length,i-map[prefix_sum]);
                    }
            }
        return max_length;
    }

int main()
    {
        vector<int> nums{1,0,1,1,1,0,0};
                        //1,-1,1,1,1,-1,-1
        cout<<longest_0_1(nums);
        return 0;        
    }