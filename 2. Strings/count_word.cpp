#include <iostream>
#include <string>
using namespace std;

int count_words(string str)
    {
        int word = 0,flag = 0;
        for(int i = 0; i < str.length(); i++)
            {
                if(str[i] == ' ')
                    {
                        flag = 0;
                    }
                else if(flag == 0)
                    {
                        flag = 1;
                        word++;
                    }
            }
        cout<<word;
    }

int main() 
    {
        string str;
        getline(cin,str);
        count_words(str);
        return 0;
    }