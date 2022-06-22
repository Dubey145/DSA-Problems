#include<iostream>
#include<climits>
using namespace std;
/*
to find the 2nd largest element in the array
eg 2 6 1 9 8 5 7
output - 8

*/

long int second_largest(long int array[], long int size)
    {
        long int max = -1001;
        long int second_max = -1001;

        for(long int i=0; i<size; i++)
            {
                if(array[i] > max)
                    {
                        second_max = max;
                        max = array[i];
                    }
                else if (array[i] < max && array[i] > second_max)
                    {
                        second_max = array[i];
                    }
            }
        return second_max;
    }

int main ()
    {
        int size;
        cin>>size;
        long int *array = new long int[size];
        for (int i = 0; i < size; i++)
            {
                cin>>array[i];
            }
        cout<<second_largest(array,size);
        return 0;
    }