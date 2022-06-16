//1234 - output = 10 i.e sum of digits 
#include<iostream>
using namespace std;

int digit_sum(int number)
    {
    //     int last_digit = number % 10;
    //     int next = number.
        if((number/10)==0)
            {
                return number;
            }
        else 
            {
                return number%10 + digit_sum((number/10));
            }
    }
int main()
    {
        int n;
        cin>>n;
        cout<<digit_sum(n);
    }