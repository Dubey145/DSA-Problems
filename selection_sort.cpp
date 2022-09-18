#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main()
    {
        int nums[]= {10,5,8,20,2,18};
        int size = 6;
        for(int i = 0 ; i < size;i++ )
            {
                int min_index = i;
                for(int j = i+1 ; j < size; j++)
                    {
                        if(nums[j]<nums[min_index])
                            min_index = j;
                    }
                swap(nums[min_index],nums[i]);
            }
        for(int i = 0 ; i < size; i ++)
            {
                cout<<nums[i]<<" ";
            }
        return 0;
    }