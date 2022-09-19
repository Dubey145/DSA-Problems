// problem link : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string str1 = "";
        string str2 = "";

        for(string str : word1)
            {
                str1+=str;
            }
        for(string str : word2)
            {
                str2+=str;
            }
        
        cout<<str1<<" "<<str2;
        if(str1 == str2)
            return true;
        return false;
    }

int main()
    {
        vector<string> word1{"a","bc"};
        vector<string> word2{"ab","c"};

        cout<<arrayStringsAreEqual(word1,word2);
        return 0;
    }