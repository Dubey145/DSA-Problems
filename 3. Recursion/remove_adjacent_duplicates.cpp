//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
#include<iostream>
using namespace std;

string removeDuplicates(string s) 
    {
        if(s.length() == 2){
            if(s[0] == s[1])
                s = "";
         return s;
        }
        for(int i = 1 ; i<s.length();i++)
            {
                if(s[i] == s[i-1])
                    {
                        s.erase(s.begin()+(i-1),s.begin()+i+1);
                        s = removeDuplicates(s);
                    }
            }
        return s;
        //works but TLE
    }

string removeDuplicates(string s) 
    {
        string result = "";
        for(int i = 1; i<s.length()-3;i++) 
            {
                if(s[i] != s[i-1])
                    {
                        result.push_back(i-1);
                    }
                else
                    {
                        i+=1
                    }
            }
        if(s[s.length()-1] != s[s.length()-2]){
            result.push_back(s[s.length()-1])
            result.push_back(s[s.length()-2])
        }

    }

int main()
    {
        string s = "qqaba";
        cout<<removeDuplicates(s);
    }