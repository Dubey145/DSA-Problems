// problem link : https://leetcode.com/problems/first-unique-character-in-a-string/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int firstUniqChar(string s) 
    {
        unordered_map<char,int> map;
        for(char c : s)
            {
                map[c]++;
            }
        for(int i = 0; i < s.size();i++)
            {
                if(map[s[i]] == 1)
                    return i;
            }
        return -1;
    }
int main()
    {
        vector<int> nums{};
        string s ="aabb";
        cout<<firstUniqChar(s);
        return 0;
    }