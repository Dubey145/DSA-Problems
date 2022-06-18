#include<iostream>
using namespace std;
int power(int num, int pow) 
    {
        if(pow<0)
            {
            return -1;
            } 
        if (pow == 0)
            {
                return 1;
            }
        if(pow == 1)
            {
                return num;
            }
        else 
            {
                return num * power(num,pow-1);
            }
    }

int main()
    {
        int number,pow; 
        cin>>number>>pow;
        cout<<power(number,pow);
    }