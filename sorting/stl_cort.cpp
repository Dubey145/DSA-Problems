/*

sort is used to sort input usually from containers that allow random access 
eg : array, vector, dequeue
sort takes 2 addresses or 2 iterators 


*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//copy function signature

int main()
    {
        vector<int> nums{2,10,1,19};

        int array[] = {2,4,3,7,4,1};
        int size = 6;

        sort(nums.begin(),nums.end()); //ascending
        sort(nums.begin(),nums.end(),greater<int>()); // sorts in descending order

        for(int number : nums)
            cout<<number<<" ";
        
        cout<<endl;
        sort(array,array+size); // ascending
        sort(array,array+size,greater<int>());//descending
        
        for(int number : array)
            {
                cout<<number<<" ";
            }

        return 0;
    }