#include<iostream>
using namespace std;

void fib(int n)
    {
        if(n == 0)
            {    cout<<"0";
                 return;
            }
        if(n == 1)
            {
                cout<<"0\n1";
                return;
            }
        cout<<"0\n1\n";
        int lastlast = 0;
        int last = 1;
        int current;
        for(int i = 1;i<n;i++)
            {  
                current = lastlast + last;
                cout<<current<<"\n";
                lastlast = last;
                last = current;
            }   
    }

int main()
    {
        int n;
        cin>>n;
        fib(n);
        return 0;
    }
