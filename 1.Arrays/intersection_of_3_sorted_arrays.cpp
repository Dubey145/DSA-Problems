//https://www.geeksforgeeks.org/find-common-elements-three-sorted-arrays/
// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int> &a,vector<int> &b,vector<int> &c)
    {
        int x = 0,y=0,z=0;
        int size1 = a.size();
        int size2 = b.size();
        int size3 = c.size();

        vector<int> result;

        while(x<size1 && y<size2 && z<size3)
            {
                if(a[x] == b[y] && b[y] == c[z])
                    {
                        result.push_back(a[x]);
                        x++;
                        y++;
                        z++;
                    }
                else if(a[x]<b[y])
                    {
                        x++;
                    }
                else if(b[y]<c[z])
                    {
                        y++;
                    }
                else
                    {
                        z++;
                    }
            }
        return result;
    }
int main()
    {
        vector<int> nums1{1,5,10,20,40,80};
        vector<int> nums2{6,7,20,80,100};
        vector<int> nums3{3,4,15,20,30,70,80,120};

        vector<int> result = intersection(nums1,nums2,nums3);

        for(int i = 0 ; i<result.size();i++)
            {
                cout<<result[i]<<" ";
            }
        return 0;
    }