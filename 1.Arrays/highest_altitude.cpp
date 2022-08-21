// problem link : https://leetcode.com/problems/find-the-highest-altitude/
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int largestAltitude(vector<int>& gain) 
    {
        int size = gain.size();
        vector<int> altitude(size+1,0);
        int max = 0;         
        cout<<altitude[0]<<" ";
        for(int i = 1; i <= size; i ++)
            {
                altitude[i] = altitude[i-1] + gain[i-1];
                cout<<altitude[i]<<" ";
                if(altitude[i]>max)
                    {
                        max = altitude[i];
                        // cout<<"\n max = "<<max<<endl;
                    }
            }
        
        return max;
    }

int main()
    {
        vector<int> nums{-4,-3,-2,-1,4,3,2};
        cout<<largestAltitude(nums)<<endl;

        return 0;
    }