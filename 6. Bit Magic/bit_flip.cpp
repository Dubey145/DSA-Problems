//https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
//bit magic
#include<iostream>
using namespace std;
int minBitFlips(int start, int goal) 
    {
        int count = 0 ;
        int number = start^goal;
        while(number != 0)
            {
                if(number&1 == 1)
                    {
                        count++;
                    }
                number = number>>1;
            }
        
        return count;
    }
int main()
    {
        int start = 5;
        int end = 7;
        cout<<minBitFlips(start,end);
    }
