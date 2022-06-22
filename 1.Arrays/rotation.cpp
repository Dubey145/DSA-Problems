#include<iostream>
using namespace std;

//array rotation leftwards 

void rotate(int array[], int r,int size)
    {
        int swapper;
        while(r--)
            {
                int i = 0;
                swapper = array[0];
                for(i = 0;i < size;i++)
                    {
                        array[i] = array[i+1];
                    }
                array[i-1] = swapper;
            }
  		
        for(int k = 0;k < size;k++)
            {
          		if(k == size-1)
                  	cout<<array[k]<<endl;
          		else 
                  cout<<array[k]<<" ";
            }
    }


int main()
    {
        int test;
        cin>>test;
        while(test--)
            {
                int size;
                cin>>size;
                int* array = new int [size];
                for(int i = 0; i < size; i++)
                    {
                        cin>>array[i];
                    }
                int r;
                cin>>r;
                rotate(array,r,size);
            }
        return 0;
    }