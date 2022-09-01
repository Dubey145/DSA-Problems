// problem link : square root of a number   
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sqroot(int x)
    {
        int start = 1;
        int end = x;
        int ans = -1;
        while(start<=end)
            {
                int mid = (start+end)/2;
                if(mid*mid == x)
                    {
                        return mid;
                    }
                else if((mid*mid) >x)
                    {
                        end = mid -1;
                    }
                else 
                    {
                        start = mid+1;
                        ans = mid;
                    }
            }
        return ans;
    }

int main()
    {
        vector<int> nums{};
        //int x =4;
        cout<<sqroot(125);

        return 0;
    }