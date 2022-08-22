#include<iostream>
using namespace std;

bool check(int number, int bit)
    {
        cout<<"bit is set to :";
        //we have to bit-1 times bit because 1 will be under the first bit 

        if(((number>>(bit-1)) & 1) != 0)
            {
                return true;
            }

        return false;
    }

int main()
    {
        int number = 5;
        int bit = 1;
        cout<<check(number,bit);
        return 0;
    }
