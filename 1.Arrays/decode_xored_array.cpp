// problem link : https://leetcode.com/problems/decode-xored-array/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> decode(vector<int>& encoded, int first) 
    {
        vector<int> result;
        result.push_back(first);

        for(int i = 1; i <=encoded.size();i++)
            {
                result.push_back(result[i-1] ^ encoded[i-1]);
            }
        return result;
    }
int main()
    {
        vector<int> nums{6,2,7,3};
        int first = 4;

        vector<int> result =decode(nums,first);
        for(int i = 0 ; i<result.size();i++)
            cout<<result[i]<<" ";

        return 0;
    }