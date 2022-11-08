// problem link : majority element
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<utility>
using namespace std;

int majorityElement(vector<int> &nums)
    {
        unordered_map<int,pair<int,int>> majority;
        for(int i = 0; i <nums.size();i++)
            {
                majority.insert({nums[i],{i,0}});
                majority[nums[i]].second++;
            }
        int max_freq = 0;
        int max_element =0;
        int max_index = 0;
        for(auto it : majority)
            {
                if(max_freq<=it.second.second)
                    {
                        max_freq = it.second.second;
                        max_element = it.first;
                        max_index = it.second.first;
                    }
            }
        return max_index;
    }

int majorityElement2(vector<int> & nums)
    {
        int index=0;
        int max_count=1;
        int counter = 1;
        sort(nums.begin(),nums.end());
        for(auto it : nums) cout<<it<<" ";
        for(int i = 0; i < nums.size();i++)
            {
                if(nums[i] == nums[i+1])
                    {
                        counter++;
                    }
                else 
                    {
                        //max_count = max(max_count,counter);
                        if(max_count<counter)
                            {
                                max_count = counter;
                                counter = 1;
                                index = i;
                            }
                    }
            }
        return index;
    }

//an element that has occurred more than n/2 times
int majority(vector<int> nums)
    {
        //moore's voting algorithm
        int res = 0;
        int count = 1;

        for(int i =1 ; i<nums.size(); i++)
            {
                if(nums[i] == nums[res])
                    count++;
                else 
                    count--;
                if(count == 0) 
                    {
                        res = i;
                        count = 1;
                    }
            }
        count = 0;
        for(int i = 0; i <nums.size();i++)
            {
                if(nums[i] == nums[res])
                    count++;
            }
        if(count>(nums.size())/2)
            {
                return res;
            }
        return -1;
    }
int main()
    {
        vector<int> nums{4,3,8,8,8};
        cout<<majorityElement2(nums);


        return 0;
    }
