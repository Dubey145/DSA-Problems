// problem link : https://leetcode.com/problems/kth-distinct-string-in-an-array/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

string kthDistinct(vector<string>& arr, int k) 
    {
        unordered_map<string,int> mep;
        for (string str : arr)
            {
                mep[str]++;
            }
        for(string str: arr)
            {
                if(mep[str] == 1)
                    k--;

                if(k==0)
                    return str;
            }
        return "";
    }

int main()
    {
        vector<int> nums{};


        return 0;
    }