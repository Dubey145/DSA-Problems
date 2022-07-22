//https://leetcode.com/problems/merge-sorted-array/

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int p1 = m-1;
        int p2 = n-1;
        int i = m+n-1;

        while(p2>=0)
            {
                if(p1>=0 && nums1[p1] && nums2[p2])
                    {
                        nums1[i--] = nums2[p2--];
                    }
                else 
                    {
                        nums1[i--] = nums2[p2--];
                    }
            }
    }

int main()
    {
        vector<int> nums1;
        nums1.push_back(1);
        nums1.push_back(2);
        nums1.push_back(3);
        nums1.push_back(0);
        nums1.push_back(0);
        nums1.push_back(0);

        vector<int> nums2;

        nums2.push_back(2);
        nums2.push_back(5);
        nums2.push_back(6);

        merge(nums1,3,nums2,3);

        return 0;
    }