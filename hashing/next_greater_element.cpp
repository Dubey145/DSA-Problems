// problem link : https://leetcode.com/problems/next-greater-element-i/
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int> map;
        vector<int> result;
        for(int i = 0; i < nums2.size();i++)
            {
                int next_max = nums2[i];
                for(int j = i+1 ; j < nums2.size();j++)
                    {   
                        if( nums2[j] > next_max)
                            {
                                map[nums2[i]] = nums2[j];
                                break;
                            }
                    }
            }
        for(int i = 0 ; i < nums1.size();i++)
            {
                if(map.find(nums1[i]) != map.end())
                    {
                        result.push_back(map[nums1[i]]);  
                    }
                else 
                    {
                        result.push_back(-1);
                    }
            }
        return result;
    }
int main()
    {
        vector<int> nums{};


        return 0;
    }
