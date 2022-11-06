// https://leetcode.com/problems/find-all-duplicates-in-an-array/
#include<iostream>
#include<vector>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) 
    {
        int size = nums.size();
        vector<int> duplicates;
        vector<int> contains(size);

        for(int i = 0; i < size; i++)
            {
                cout<<endl;
                if(contains.at(nums.at(i)-1) == 0)
                    {                                                
                        cout<<"\n iteration "<<i;
                        cout<<"\n adding to contains "<<nums.at(i);
                        cout<<"\n position added "<<nums.at(i)-1;
                        contains.at(nums.at(i)-1) = nums[i];
                    }
                else
                    {
                        cout<<"\n iteration "<<i;
                        cout<<"\n duplicate "<<nums[i];
                        duplicates.push_back(nums[i]);
                    }
            }
        return duplicates;
    }
int main() 
    {
        vector<int> nums;
        nums.push_back(1);
        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(3);
        nums.push_back(3);

        nums = findDuplicates(nums);
        for(int i = 0; i < nums.size(); i++)
            {
                cout<<nums[i]<<" ";
            }
        return 0;
    }
