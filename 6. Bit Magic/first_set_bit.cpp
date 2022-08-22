// find first set bit
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

unsigned int getFirstSetBit(int n)
    {
        int counter = 1;
        while(!((n>>1) & 1))
            {
                n = n>>1;
                counter++;
            }
        return counter+1;
    }
unsigned int better_get_first(int n)
    {
        //n&~(n-1) will give a number that has its rightmost bit as 1
        int result = log2(n & (~(n-1)));
        return result+1;
    }
int main()
    {
        //vector<int> nums{};
        int number = 11;
        cout<<better_get_first(number)<<endl;

        return 0;
    }