// problem link : sum of digits using recursion
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int digit_sum(int number)
    {
        if(number/10 == 0)
            return number%10;
        return number%10 + digit_sum(number/10);
    }

int main()
    {
        //vector<int> nums{};

        int number = 12;
        cout<<endl<<digit_sum(number)<<endl;
        return 0;
    }