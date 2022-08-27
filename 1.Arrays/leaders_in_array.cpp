// problem link : leaders in an array 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void leader(vector<int>nums)
    {
        //o(n^2)
        for(int i = 0 ; i <nums.size();i++)
            {
                bool leader = true;
                for(int j = i+1 ; j <nums.size();j++)
                    {
                        if(nums[i]<nums[j])
                            {
                                leader = false;
                                break;
                            }
                    }
                if(leader)
                    cout<<nums[i]<<" ";     
            }
    }

void better_leader(vector<int> nums)
    {
        int max = INT_MIN;
        for(int i = nums.size()-1; i >=0 ; i--)
            {
                if(nums[i]>max)
                    {
                        max = nums[i];
                        cout<<max<<" ";
                    }   
            }
        
    }

int main()
    {
        vector<int> nums{7,10,4,3,6,5,2};
        leader(nums);


        return 0;
    }