// problem link : https://leetcode.com/problems/count-common-words-with-one-occurrence/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int countWords(vector<string>& words1, vector<string>& words2) 
    {
        unordered_map<string,int> mep1;
        unordered_map<string,int> mep2;
        for(string str : words1)
            {
                mep1[str]++;
            }
        for(string str : words2)
            {
                mep2[str]++;
            }
        int count =0;
        for(auto it = mep2.begin(); it!= mep2.end();it++)
            {
                if(it->second == 1)
                    {
                        if(mep1[it->first] == 1)
                            count++;
                    }
            }
        return count;
    }
int main()
    {
        vector<int> nums{};


        return 0;
    }