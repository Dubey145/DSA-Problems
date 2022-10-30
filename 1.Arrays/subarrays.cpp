//A subarray is a contiguous part of array.
//for an array/string of size n, there are n*(n+1)/2 
//non-empty subarrays/substrings.
#include<iostream>
using namespace std;


int main()
    {
        int array[] = {1,2,3,4};
//We can run two nested loops, the outer loop picks 
//starting element and inner loop considers all elements 
//on right of the picked elements as ending element of 
//subarray. 

        for(int i = 0; i<4;i++)
            {
                for(int j = i;j<4;j++)
                    {
                        //print subarrays
                        for(int k = i;k<=j;k++)
                            {
                                cout<<array[k]<<" ";
                            }
                        cout<<endl;
                    }
            }


    }
