// problem link : https://leetcode.com/problems/summary-ranges/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> ranges;

        int starting_number;

        for(int i = 0; i<nums.size();i++)
            {
                starting_number = nums[i];
                while((i+1<nums.size()) && (nums[i+1] == nums[i] + 1))
                    {//find the breakpoint, find the last element in the range 
                        i++;
                    }
                if(starting_number != nums[i])
                    {
                        //build the range string and append it to result
                        ranges.push_back(to_string(starting_number) + "->" +to_string(nums[i]) );
                    }
                else
                    {
                        ranges.push_back(to_string(starting_number));
                    }
            }
        return ranges;

    }
/*

notes
str.push_back is only used to push a single char
to_string() will convert whatever passed to a string so extra variables are not required

do not forget to check out of range condition i+1<size

*/

int main()
    {
        vector<int> nums{0,1,2,4,5,7};
        summaryRanges(nums);
        return 0;
    }