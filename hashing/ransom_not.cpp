// problem link : https://leetcode.com/problems/ransom-note/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int>map;
        for(char c : magazine)
            {
                map[c]++;
            }
        for(int i = 0; i < ransomNote.size() ; i++)
            {
                if(map.find(ransomNote[i])!=map.end())
                    {
                        
                    }
            }
    }

int main()
    {
        vector<int> nums{};


        return 0;
    }