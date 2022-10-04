// problem link : generate all subsets of a string using recursion 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void substr(string s,string current = "",int i = 0)
    {
        if(i == s.size())
            {
                cout<<current<<" ";
                return;
            }
        substr(s,current,i+1);
        substr(s,current+s[i],i+1);
    }

int main()
    {
        substr("abc");


        return 0;
    }
