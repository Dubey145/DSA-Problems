#include<iostream>
#include<algorithm>
using namespace std;

int main()
    {
        int array[] = {20,5,40,60,10,30};
        int size = 6;
        for(int i = 1; i< size; i++)   
            {
                int key = array[i];
                int j = i-1 ;
                while(j>=0 && array[j]>key)
                    {
                        array[j+1] = array[j];
                        j--;
                    }
                array[j+1] = key;
            }
        for(int i = 0 ; i < size; i ++)
            {
                cout<<array[i]<<" ";
            }

        return 0;
    }
