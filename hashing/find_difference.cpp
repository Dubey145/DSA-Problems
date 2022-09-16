// problem link : https://leetcode.com/problems/find-the-difference/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

char findTheDifference(string s, string t) {
        
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        
        for(int i = 0 ; i < s.size();i++)
        {
            map1[s[i]]++;
        }
        for(int i = 0 ; i < t.size();i++)
        {
            map2[t[i]]++; 
        }
        for(int i = 0 ; i < t.size();i++)
        {
            auto it = map1.find(t[i]);
            if(it != map1.end())
            {
                if(it->second != map2[t[i]])
                        return t[i];
            }
            else 
                return t[i];
        }
        return s[0];
    }
int main()
    {
        vector<int> nums{};
        return 0;
    }