// problem link : https://leetcode.com/problems/check-distances-between-same-letters/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool checkDistances(string s, vector<int>& distance) 
    {
        unordered_map<char,int> first;
        unordered_map<char,int> second;

        for(int i= 0; i <s.size();i++)
            {
                if(first.find(s[i]) == first.end())
                    {
                        first.insert({s[i],i});
                    }
                else 
                    {
                        second.insert({s[i],i});
                    }
            }

        for(auto it : second)
            {
                if(it.second - first.find(it.first)->second-1 != distance[it.first-'a'])
                return false;
            }
        return true;
    }
int main()
    {
        vector<int> nums{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        string s ="aa";
        
        cout<<checkDistances(s,nums);

        return 0;
    }