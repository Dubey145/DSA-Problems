#include<iostream>
using namespace std;

//merge sort is a divide an conquer algorithm 

//print elements in sorted order from 2 sorted arrays 
int main()
    {
        int array1[] = {10,15,20};
        int array2[] = {5,6,6,15};
        int size1 = 3;
        int size2 = 4;
        int i = 0;
        int j = 0;

        while(i<size1 && j<size2)
            {
                if(array1[i]<array2[j])
                    {
                        cout<<array1[i]<<" ";
                        i++;
                    }
                else if(array1[i]>array2[j])
                    {
                        cout<<array2[j]<<" ";
                        j++;
                    }
                else 
                    {
                        cout<<array1[i]<<" "<<array2[j]<<" "; 
                        i++;
                        j++;
                    }
            }
        // if(i == size1-1)
        //     cout<<array1[i];
        // if(j==size2-1)
        //     cout<<array2[j]; run a loop to print the remaining elements
        // if(j < size2)
        //     {
                while(j < size2)
                    {
                        cout<<array2[j]<<" ";
                        j++;
                    }
            //}
        // if(i < size1)
        //     {
                while(i<size1)
                    {
                        cout<<array1[i]<<" ";
                        i++;
                    }
            //}
        return 0;
    }
