// problem link : total number of digits in a number
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int total(int number)
    {
        if(number/10 == 0)
            return 1;
        else
            return 1+ total(number/10);
    }

int main()
    {


        return 0;
    }