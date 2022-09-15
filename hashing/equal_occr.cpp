// problem link : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool areOccurrencesEqual(string s) 
    {
         unordered_map<char,int> map;
        for(int i = 0 ; i < s.size();i++)
            {
                map[s[i]]++;
            }   
        int count = map.begin()->second; 
        for(auto it : map)
            {
                cout<<it.first<<" "<<it.second<<endl;
                if(it.second != count)
                    return false;
            }
        return true;
    }

int main()
    {
        vector<int> nums{};
        cout<<areOccurrencesEqual("aaabb");

        return 0;
    }
