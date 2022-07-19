//https://leetcode.com/problems/missing-number/

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    //o(n^2)
        int size = nums.size();
        int found;
        for(int i = 1; i < size+1; i++) 
            {
                found = 0;
                for(int j = 0; j < size; j++) 
                    {
                        if(nums.at(j) == i) 
                            {
                                found = 1;
                                break;
                            }
                    }
                        
                if(found == 0) 
                    {
                        return i;
                    }
            }
    }

//o(n)
int findMissing(vector<int> nums)
    {
        int size = nums.size();
        int totalSum = size*(size+1)/2;

        int vector_sum = 0;
        for(int i = 0; i < size; i++) 
            {
                vector_sum += nums.at(i);
            }
        return totalSum - vector_sum;

    }

int main() 
    {
        vector<int> nums;
        nums.push_back(1);
        nums.push_back(5);
        nums.push_back(2);
        nums.push_back(0);
        nums.push_back(3);
        cout<<missingNumber(nums)<<endl;
        cout<<findMissing(nums);
        return 0;
    }