//1234-->4321
#include<iostream>
using namespace std;

void reverse(int number)
    {
        int last_digit = number % 10;
        if(number/10 == 0)
            {
                cout<<number<<endl;
            }
        else 
            {
                cout<<last_digit;
                reverse(number/10);
            }
    }

int main()
    {
        int n;
        cin>>n;
        reverse(n);
        return 0;
    }