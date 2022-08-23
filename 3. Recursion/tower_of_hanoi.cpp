// problem link : tower of hanoi
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void toh(int n, char a,char b,char c)
    {
        if(n == 1)
            {
                cout<<"move 1 from "<<a<<" to "<<c<<endl;
                return; 
            }
        toh(n-1,a,c,b);
        //after the above recursive call n-1 disks will be shifted to the aux rod
        cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
        //the largest disk is shifted to the correct rod 
        toh(n-1,b,a,c);
        //we repeat the process for the disks in the aux rod
    }

int main()
    {
        toh(3,'A','B','C');


        return 0;
    }