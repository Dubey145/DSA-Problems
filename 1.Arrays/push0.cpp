#include<iostream>
using namespace std;

/* push all 0 to the end 
eg input array = 2 6 0 0 1 9 0 8 0
output = 2 6 1 9 8 0 0 0 0 
*/
int main()
    {
        int array[9];
        for (int i = 0; i < 9; i++)
            {
                cin>>array[i];
            }
        int end = 8;
        int start = 0;
        int copy[9];
        for(int i =0;i<9;i++)
            {
                if(array[i] == 0)
                    {
                        copy[end] = 0;
                        end -= 1;
                    }
                else 
                    {
                        copy[start] = array[i];
                        start +=1;
                    }                
            }

        for(int i = 0; i < 9; i++) 
            {
                cout<<copy[i]<<" ";
            }
        return 0;
    }