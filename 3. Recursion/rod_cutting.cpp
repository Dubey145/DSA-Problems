// problem link : rope cutting problem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//recursive solution
int rope(int length, int a, int b, int c)
    {
        if(length == 0)
            return 0;
        if(length<0) 
            return -1;

        int result = max(rope(length-a,a,b,c),rope(length-b,a,b,c),rope(length-c,a,b,c));

        if(result == -1)
            return result;
        return result+1;
         
    }
//better solution using dynamic programming
int main()
    {
        int length = 23;
        int a = 11,b=9,c=12;
        cout<<rope(length,a,b,c);

        return 0;
    }