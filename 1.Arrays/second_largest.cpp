#include <iostream>
using namespace std;

/*
to find the 2nd largest element in the array
eg 2 6 1 9 8 5 7
output - 8

*/

int second_largest(int array[], int size)
    {
        int max1 = array[0], max2 = array[1];
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
        int array[7];
        for (int i = 0; i < 7; i++)
            {
                cin>>array[i];
            }
        cout<<second_largest(array,7);
        return 0;
    }