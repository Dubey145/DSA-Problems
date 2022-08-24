//gfg lucky numbers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isLucky(int n, int grim_reaper = 2) 
    {
        if(grim_reaper>n)
            return true;
        if(n%grim_reaper == 0)
            return false;
    
        return isLucky(n-(n/grim_reaper),grim_reaper+1);
    }
int main()
    {
        cout<<isLucky(5);


        return 0;
    }