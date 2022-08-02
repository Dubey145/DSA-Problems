// problem link : https://leetcode.com/problems/relative-ranks/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<string> findRelativeRanks(vector<int>& score) 
    {
        vector<string> result;

        result.push_back("Gold Medal");
        result.push_back("Silver Medal");
        result.push_back("Bronze Medal");

        for(int i = 3;i<score.size();i++)
            {
                result.push_back(to_string(i+1));
            }
        return result;
        //pending
    }
int main()
    {
        vector<int> nums{5,4,3,2,1};
        vector<string>result = findRelativeRanks(nums);

        for(int i = 0 ; i <result.size();i++)
            {
                cout<<result[i]<<" ";
            }

        return 0;
    }