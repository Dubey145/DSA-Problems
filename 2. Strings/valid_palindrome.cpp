// https://leetcode.com/problems/valid-palindrome/

#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(string s) {
        //declaring a new string to store only alpha numeric chars        
        string an = "";
        for(int i = 0 ;i<s.size();i++)
            {
                if(isalnum(s[i]))
                    an.push_back(tolower(s[i]));
            }
        int size = an.length();
        //check palindrome here 
        for(int i = 0 ; i < size/2 ;i++)
            {
                if(an[i] != an[size-i-1])
                {
                    return false;
                }
            }
        return true;
    }

int main()
    {
        string s = "A man, a plan, a canal: Panama";
        cout<<endl<<isPalindrome(s);
        return 0;
    }
