#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longest_subarray(vector<int> &nums, int sum)
    {
        unordered_set<int> set;
        int prefix_sum = 0;
        int start_index = 0;
        int end_index = 0;
        int max_length = 0;

        for(int i = 0 ; i < nums.size();i++)
            {
                prefix_sum+=nums[i];
                if(nums[i] == sum)
                    {
                        max_length = max(max_length,1);
                        start_index = i;
                        end_index = i;
                    }
                if(prefix_sum == sum)
                    {
                        max_length = max(max_length,end_index - start_index+1);
                        start_index = i+1;
                        end_index = i+1;
                        prefix_sum = 0;
                        set.clear();
                    }
                if(set.find(prefix_sum-sum) != set.end())
                    {
                        max_length = max(max_length,end_index-start_index);
                        set.clear();
                        start_index = i+1;
                        end_index = i+1;
                        prefix_sum = 0;
                    }
                set.insert(prefix_sum);
                end_index++;
            }
        return max_length;
    } // fails for some test cases

int long_sub(vector<int> &nums, int sum)
    {
        unordered_map<int,int> map;
        //lets store the first occurrence of a prefix_sum;
        int prefix_sum = 0;
        int max_length = 0;
        for(int i = 0 ; i < nums.size(); i ++)
            {
                prefix_sum += nums[i];
                if(prefix_sum == sum)
                    {
                        max_length = i+1;
                    }
                if(map.find(prefix_sum) == map.end())
                    {
                        map.insert({prefix_sum,i});
                    }
                if(map.find(prefix_sum) != map.end())
                    {
                        max_length = max(max_length,i-map[prefix_sum])
                    }
            }
        return max_length;
    }

int main()
    {
        vector<int> nums{8,3,7};
        int sum = 15;
        cout<<longest_subarray(nums,sum);
        return 0;
    }