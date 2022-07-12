// https://leetcode.com/problems/remove-duplicates-from-sorted-array/ 
#include<iostream>
using namespace std;

int main()
    {
        //
        int array[] = {1,1,2,3,4,4,8,9}; // array in ascending order
        int length = 8;
        int i = 0;
        int j = 1;
        while(j != length)
            {
                if(array[i] == array[j])
                    {
                        j++;
                    }
                else 
                    {
                        i++;
                        array[i] = array[j];
                    }
            }
        // //each element should appear only once and the order should be maintained 
        // int i = length-1;
        // int last_space = length -1;
        // //starting operations form the end  
        // while(i!=0)
        //     {
        //         if(array[i] == array[i-1])
        //             {
        //                 //duplicate element 
        //                 array[i] = 999;
        //                 if(i != length -1)
        //                     {
        //                         //swap with last space
        //                         array[i] = array[i+1];
        //                         array[i+1] = 999;
        //                     }
        //                 i--;
        //             }
        //         else
        //             {
        //                 i--;
        //             }
        //     }
        for(int i = 0 ;i<length;i++)
            {
                cout<<array[i]<<" ";
            }

        cout<<i+1;
        return 0;
    }
