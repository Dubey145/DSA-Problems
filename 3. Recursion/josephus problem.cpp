// problem link : josephus problem 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int jos(int n, int k)
    {
        if(n == 1)
            return 0;
        return ((jos(n-1,k)+k)%n);
    }

int main()
    {
        int n = 5;
        int k = 3;
        cout<<jos(n,k);

        return 0;
    }