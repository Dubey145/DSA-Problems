// problem link : Rightmost different bit
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int posOfRightMostDiffBit(int m, int n)
    {
        int index = 1;
        if(m==n) return -1;
        while(m!=0 || n != 0)
            {
                if((m & 1) != (n & 1))
                    {
                        return index;
                    }
                index++;
                m = m>>1;
                n= n>>1;
            }
        return index;

    }

//better solution - xor result will have 1 where the bits do not match, simply return the position of the rightmost set bit

int better_posOfRightMostDiffBit(int m, int n)
    {
        if(m==n) return -1;
        m = m ^ n;
        return log2(m & (~(m-1))) + 1;
    }

int main()
    {
        int m = 10;
        int n = 0;
        cout<<better_posOfRightMostDiffBit(m,n)<<endl;


        return 0;
    }