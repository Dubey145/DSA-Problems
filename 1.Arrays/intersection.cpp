#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> result;
        int size1 = nums1.size();
        int size2 = nums2.size();

        int min = size1>size2? size1 : size2;

        if(min == size1) // nums1 is smaller
            {
                for(int i = 0 ; i < min ; i++)
                    {
                        for(int j = 0 ; j < size2 ; j++)
                            {
                                if(nums1[i] == nums2[j]) 
                                    {
                                        result.push_back(nums1[i]);
                                        break;
                                    }
                            }
                    }
            }
        else //nums2 is smaller 
            {
                for(int i = 0 ; i < min ; i++)
                    {
                        for(int j = 0 ; j < size1 ; j++)
                            {
                                if(nums2[i] == nums1[j]) 
                                    {
                                        result.push_back(nums2[i]);
                                        break;
                                    }
                            }
                    }
            }

    }
//the above is just too complex and too huge 
// lets try 2 pointers
vector<int> intersection2(vector<int>& nums1, vector<int>& nums2) 
    {
        int i = 0, j = 0, previous = -1;
        vector<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        while((i < nums1.size()) && (j < nums2.size()))
            {
                if(nums1[i] == nums2[j])
                    {
                        if(nums1[i] != previous)
                        {
                            result.push_back(nums1[i]);
                            previous = nums1[i] ; 
                        }
                        i++;
                        j++;
                    }
                else if(nums1[i]>nums2[j])
                    {
                        j++;
                    }
                else 
                    {
                        i++;
                    }
            }
        return result;
    }


int main()
    {

        
        return 0;
    }