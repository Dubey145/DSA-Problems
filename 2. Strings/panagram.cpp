#include <string>
#include<iostream>
using namespace std;

bool panagram(string str) 
    {
        int sum = 0;
        for(int i = 0; i < str.size(); i++)
            {
                if(str[i] != ' ')
                    sum = sum + str[i];
            }
        return sum == 3833;
    }

int main()
    {
        string str;
        getline(cin, str);
        cout<<panagram(str);
        return 0;
    }
