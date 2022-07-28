// https://leetcode.com/problems/shuffle-string/

#include<iostream>
#include<vector>
using namespace std;

string restoreString(string s, vector<int>& indices) 
    {
        string result = s;
        //result.append(s.length(),'x');
        for(int i = 0 ; i <s.length(); i++)
            {
               result[indices[i]] = s[i];
            }
        return result;
    }

int main()
    {
        string s = "codeleet";
        vector<int> indices{4,5,6,7,0,2,1,3};
        cout<<restoreString(s,indices);
        return 0;
    }