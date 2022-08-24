// problem link : number of k sum subset with recursion 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int subset(int arr[],int n,int sum)
    {
        if(n == 0) 
            return (sum==0)?1:0;
        return (subset(arr,n-1,sum) + subset(arr,n-1,sum-arr[n-1]));
    }

int main()
    {
        int nums[]={10,25,15,20,5};
        int sum = 25; // 1 subset{10,15}
        cout<<subset(nums,5,sum);

        return 0;
    }