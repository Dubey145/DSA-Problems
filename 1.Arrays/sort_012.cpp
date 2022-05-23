#include <iostream>
using namespace std;
/*

sort the array containing 0 1 and 2 without using any sorting algo
eg 1 0 2 1 0 1 2 0

method 1 
count all 0 1 and 2 then place 0 1 and 2 in array

method 2
make a temp array
start placing ones form the beginning and 2 from the end  
then fill the remaining with  1s 
then copy temp to original array 

method 3
we use 3 pointers(variables) low mid and high
initially low and mid are 0 but high is size -1 
we read elements that mid is pointing 
if it points to a 0 we swap a[low] with a[mid] then increment mid and low 

if 1 then just increment 1

if 2 then swap a[mid] with a[high]
and only high--

repeat this till mid<=high
*/

void sort_012(int array[], int size)
    {
        int low = 0;
        int mid = 0;
        int high = size - 1;

        while(mid<=high)
            {
                switch (array[mid])
                    {
                        case 0 : 
                            swap(array[low], array[mid]);
                            low++;mid++;
                            break;
                        case 1: 
                            mid++; break;
                        case 2: 
                            swap(array[mid], array[high]);
                            high--;
                            break;
                    }
            }

    }
int main()
    {
        int array[8];
        for (int i = 0; i < 8; i++)
            {
                cin>>array[i];
            }
        sort_012(array,8);

        for (int i = 0; i < 8; i++)
            {
                cout<<array[i]<<" ";
            }
        return 0;
    }