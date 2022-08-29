// problem link : alternate odd evn or even odd subarray
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxOE(vector<int> nums)
    {
        int max_len = 0,current_len = 0;
        bool even = true;
        bool odd = true;

        for(int num : nums)
            {
                if((num%2 !=0) && odd)
                    {
                        odd = false;
                        even = true;
                        current_len++;
                        max_len = max(max_len,current_len);
                    }
                else if((num%2 == 0) && even)
                    {
                        odd = true;    
                        even = false;
                        current_len++;
                        max_len = max(max_len,current_len);
                    }
                else 
                    current_len = 1;
            }

        return max_len;
    }

int better_maxOE(vector<int> nums)
    {
        //based on kadnes 
        //count upto an index, keep incrementing count if it satisfies a condition else reset its value

        int result=1;
        int current=1;
        for(int i = 1;i<nums.size();i++)
            {
                if((nums[i]%2 == 0 && nums[i-1]%2 != 0) || (nums[i]%2 != 0 && nums[i-1]%2 == 0))
                    {
                        current++;
                        result = max(result,current);
                    }
                else 
                    current = 1;
            }
        return result;
    }

int main()
    {
        vector<int> nums{10,12,8,4};
        cout<<better_maxOE(nums);

        return 0;
    }