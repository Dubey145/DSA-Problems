// problem link : https://leetcode.com/problems/intersection-of-two-arrays-ii/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
      vector<int> result;
      int p1=0,p2=0;
      sort(nums1.begin(),nums1.end());
      sort(nums2.begin(),nums2.end());
      while(p1<nums1.size() && p2<nums2.size())
        {
            if(nums1[p1] == nums2[p2])
                {
                    result.push_back(nums1[p1]);
                    p1++;
                    p2++;
                    continue;
                }
            if(nums1[p1] < nums2[p2]) p1++;

            else  p2++;
        }  
        return result;
    }
int main()
    {
        vector<int> nums1{1,2,2,1};
        vector<int> nums2{2,2};
        vector<int> result = intersect(nums1,nums2);  
        for(int i=0 ; i <result.size();i++)
            {
                cout<<result[i]<<" ";
            }



        return 0;
    }