// problem link : https://leetcode.com/problems/next-greater-element-i/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int> map;
        for(int i = 0; i < nums2.size();i++)
            {
                int next_max = nums2[i];
                for(int j = i+1 ; j < nums2.size();j++)
                    {   
                        if( nums2[j] > next_max)
                            {
                                map[nums2[i]] = nums2[i];
                                break;
                            }
                    }
            }
        for(int i = 0 ; i < nums1.size();i++)
            {
                
            }
    }
int main()
    {
        vector<int> nums{};


        return 0;
    }