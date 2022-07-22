// https://leetcode.com/problems/rearrange-array-elements-by-sign/

#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) 
    {
        int size = nums.size();

        // vector<int> positive;
        // vector<int> negative;
        // //vector<int> result;

        // for(int i = 0; i < size; i++)
        //     {
        //         if(nums.at(i)>0)
        //             {
        //                 positive.push_back(nums.at(i));
        //             }
        //         else
        //             {
        //                 negative.push_back(nums.at(i));
        //             }
        //     }
        // for(int i = 0;i <(size/2);i++)
        //     {
        //         result.push_back(positive.at(i));
        //         result.push_back(negative.at(i));
        //     }

        //better way;
        int size = nums.size();
        vector<int> result(size);

       int positive = 0, negative = 1;
        
        for(int i = 0; i < size; i++)
            {
                if(nums[i]>0)
                    {
                        result[positive] = nums[i];
                        positive +=  2;
                    }
                else 
                    {
                        result[negative] = nums[i];
                        negative += 2;
                    }
            }

        return result; 
    }

int main() 
    {
        vector<int> nums;
        
        nums.push_back(3);
        nums.push_back(1);
        nums.push_back(-2);
        nums.push_back(-5);
        nums.push_back(2);
        nums.push_back(-4);

        rearrangeArray(nums);
        return 0;
    }
