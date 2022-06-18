#include<iostream>
#include<climits>
using namespace std;
/*
to find the 2nd largest element in the array
eg 2 6 1 9 8 5 7
output - 8

*/

int second_largest(int array[], int size)
    {
        int largest = INT_MIN;
        int second = INT_MIN;

        for(int i=0; i<size; i++)
            {
                if(array[i] > max1)
                    {
                        max2 = max1;
                        max1 = array[i];
                    }
                else if(array[i]>max2)
                    {
                        max2 = array[i];
                    }
            }
        return max2;
    }

int main ()
    {
        int size;
        cin>>size;
        int *array = new int[size];
        for (int i = 0; i < size; i++)
            {
                cin>>array[i];
            }
        cout<<second_largest(array,size);
        return 0;
    }