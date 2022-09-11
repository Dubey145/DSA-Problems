// problem link : https://leetcode.com/problems/decode-the-message/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

string decodeMessage(string key, string message) 
    {
        string result;
        unordered_map<char,char>map;
        char c ='a';
        for(int i = 0 ; i< key.size();i++)
            {
                if(key[i] == ' ')
                    continue;
                if(map.find(key[i]) == map.end())
                    {
                        map[key[i]] = c;
                        c=c+1;
                    }
            }
        
        char space = ' ';
        map[space] = space;
        string add;
        for(int i = 0 ; i < message.size();i++)
            {
                add = map[message[i]];
                if(message[i] == ' ')
                    {
                        add = " ";
                        result.append(add);
                    }
                else 
                    result.append(add);
                
            }
        return result;

    }

int main()
    {
        vector<int> nums{};
        cout<<decodeMessage("the quick brown fox jumps over the lazy dog","vkbs bs t suepuv");

        return 0;
    }