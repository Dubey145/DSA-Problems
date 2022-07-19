#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int size = nums.size();

        vector<int> contains(size);

        for(int i = 0; i < size; i++)
            {
                if(contains.at(nums.at(i)-1) == 0)
                    {
                        contains.at(nums.at(i) - 1) = nums[i];
                    }
                else
                    {
                        return (nums.at(i));
                    }
            }
    }

int main( )
    {

        return 0;
    }