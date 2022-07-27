// /https://leetcode.com/problems/remove-duplicate-letters/

#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

string removeDuplicateLetters(string s) 
    {
        string str; 
        sort(s.begin(),s.end());

        for(int i = 1 ; i <s.length(); i++)
            {
                if(s[i] != s[i-1])
                    str.push_back(s[i-1]);
            }

        return str;    
    }

string maintain_order(string s)
    {
        vector<bool> hash(26);
        string result;

        for(int i = 0 ;i<s.length();i++)
            {
                int index = (int)s[i] - 97;
                if(hash[index] == false)
                    {
                        hash[index] = true;
                        result.push_back(s[i]);
                    }
            }
        return result;   
    }

int main()
    {
        string s = "cbsccsa";
        cout<<removeDuplicateLetters(s);
        cout<<maintain_order(s);
        return 0;
    }