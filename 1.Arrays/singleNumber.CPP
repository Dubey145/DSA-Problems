//https://leetcode.com/problems/single-number/

#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) 
    {
        //brute force is to use 2 loops 
        //method 2, sort the vector and if a[i] !=a[i-1] return a[i];
        
        //accepted but not optimal
        int number = INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i = 1; i<nums.size();i+=2)
            {
                if(nums[i] != nums[i-1])
                    {
                        return nums[i-1];
                    }
            }
        if(number = INT_MIN) 
            {
                return nums[nums.size()-1];
            }

    }


int betterSingle(vector<int>& nums)
    {
        //https://leetcode.com/problems/single-number/discuss/1772139/C%2B%2Bor-Explained-Everything-w-WHY-XOR-WORKSor-BRUTE-FORCE-TO-OPTIMIZEDor-STEP-BY-STEP-DRY-RUN
        //using xor we can get the complexity to 1
        //because same number ^ same number = 0
        // it is commutative eg 5^1^3^1 = 5^3 = 6
        for(int i = 0; i <nums.size()-1;i++)
            {
                nums[i+1] = nums[i] ^ nums[i+1];
            }
        return nums[nums.size()-1];
    }


int main()  
    {
        vector<int> nums{4,1,2,1,2,6,6}; // sorted : 2 2 4 
        cout<<singleNumber(nums);
        return 0;
    }
