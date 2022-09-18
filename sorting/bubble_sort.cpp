#include<iostream>
#include<algorithm>
using namespace std;

int main()
    {
        int array[] = {10,8,20,5};
        int n = 4;
        for(int i = 0 ; i< n-1; i ++)
            {
                for(int j = 0; j<n-1-i; j++)
                    {
                        if(array[j]>array[j+1])
                            swap(array[j],array[j+1]);
                    }
            }
        for(int i = 0 ; i < n; i ++)
            {
                cout<<array[i]<<" ";
            }
        return 0;
    }