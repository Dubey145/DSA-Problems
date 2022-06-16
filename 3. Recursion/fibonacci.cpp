#include<iostream>
using namespace std;
// recursive program to print the fibonacci series 

int fibonacci(int number)  
    {
        if(number <= 1 )
            return number;
        
        int out =  fibonacci(number-1) + fibonacci(number-2);
        cout<<out<<endl;
        return out;
    }

void printFibonacci(int number,int a,int b) 
    {
        if(number>=0) 
            {
                printFibonacci(number-1,b,a+b); // this will reach the last required term and once the control comes back it will prnit the term
                cout<<a<<" ";
            }
    }

int main()
    {
        int number;
        cin>>number;
        printFibonacci(number,0,1);
        return 0;
    }