#include<iostream>
#include<cstring>
using namespace std;

void palindrome(char str[])
    {
        int length = strlen(str);

        for(int i = 0; i < (length/2); i++) 
            {
                if(str[i] != str[length-i-1])
                    {
                        cout<<"NO\n";
                        return;
                    }
            }
        cout<<"YES\n";
    }

int main()
    {
        char str[20];
        cin>>str;
        palindrome(str);
        return 0;
    }