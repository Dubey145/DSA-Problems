// problem link : https://leetcode.com/problems/first-letter-to-appear-twice/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

char repeatedCharacter(string s) 
    {
        unordered_map<char,int>mep;
        for(char c : s)
            {
                mep[c]++;
                if(mep[c] == 2)
                    return c;
            }
        return 'x';
    }
int main()
    {
        vector<int> nums{};


        return 0;
    }