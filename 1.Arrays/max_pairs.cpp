// problem link : https://leetcode.com/problems/maximum-number-of-pairs-in-array/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> numberOfPairs(vector<int>& nums) 
    {
        vector<int> answer(2);
        sort(nums.begin(),nums.end());
        int number_of_pairs = 0;
        int j = 1;

        for(int i = 0 ; j < nums.size(); i++) //i<nums.size() && j <nums.size()
            {
                if(nums[i] == nums[j])
                    {
                        number_of_pairs++;
                        i++;
                        j+=2;
                    }
                else
                    {
                        j++;
                    }
            }
        answer[0] = number_of_pairs;
        answer[1] = nums.size() - (2 * number_of_pairs);

        return answer;
    }

int main()
    {
        //vector<int> nums{1,3,2,1,3,2,2,4,5,6};
        vector<int> nums = {0};
        vector<int>ans = numberOfPairs(nums);
        cout<<ans[0]<<" "<<ans[1];

        return 0;
    }