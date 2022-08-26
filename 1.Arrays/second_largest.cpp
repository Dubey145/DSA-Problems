// problem link : second largest element in an array 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int second(vector<int> &nums)
    {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        for(int i = 0 ; i <nums.size() ;i++)
            {
                if(nums[i]>max1)
                    {                                                    
                        max1 = nums[i];
                    }
            }
        for(int i = 0 ; i < nums.size();i++)
            {
                if(nums[i]>max2 && nums[i]!= max1)
                    {                                                    
                        max2 = nums[i];
                    }
            }
        return max2;
    }

//in one pass

int better_second(vector<int> &nums)
    {
        if(nums.size()<2) return -1;
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        for(int i = 0 ; i<nums.size() ; i++)        
            {
                if(nums[i]>=max1)
                    {
                        max2 = max1;
                        max1 = nums[i];
                    }
                else
                    if(nums[i]>max2)
                        max2 = nums[i];
                //nums[i]<max1 &&
            }
        if(max2 == max1) return -1; // no second largest;
        
        return max2;
    }

int main()
    {
        vector<int> nums{24,80,70,150};
        cout<<better_second(nums);
        return 0;
    }