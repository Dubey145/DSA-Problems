#include<iostream>
using namespace std;
/* 
perforn array rotation 
eg 2 6 3 1 5 9 8 - input
d =2  
1st rotation - 6 3 1 5 9 8 2
2nd rotation - 3 1 5 9 8 2 6 - answer

*/
void rotate(int array[], int size,int rotations)
    {
       for(int i = 0; i < rotations; i++)
            { 
                int start = array[0];
                for(int j = 0;j<size-1;j++)
                    {
                        array[j] = array[j+1];
                    }
                array[size-1] = start;
            }
    }
int main()
    {
        int array[7];
        for (int i = 0; i < 7; i++)
            {
                cin>>array[i];
            }
        cout<<"enter d = ";
        int d;
        cin>>d;
        rotate(array,7,d);
        for (int i = 0; i < 7; i++)
            {
                cout<<array[i]<<" ";
            }
        return 0;
    }
