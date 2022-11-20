//https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        if(nums[0] >=1) return{}; // after sorting if the first element is positive but not 0;
        
        vector<vector<int>> result;
        for(int i = 0; i < nums.size();i++)
        {
            if(nums[i] > 0) // all the numbers will be positive after this number so we cannot make the sum 0
                break;
            if(i>0 && nums[i] == nums[i-1]) // the same number is repeated so we have to skip this 
                continue;
            int low = i+1;
            int high = nums.size()-1;
            int sum = 0;
            while(low<high)
            {
                sum = nums[i]+nums[low]+nums[high];
                if(sum>0) 
                    high--;
                else if(sum<0) 
                    low++;
                else
                {
                    result.push_back({nums[i],nums[low],nums[high]});
                    
                    int lastLow = nums[low];
                    //we have to navigate to the last low ocurrence if it is duplicated 
                    while(low<high && nums[low] == lastLow) 
                        low ++;
                    
                    int lastHigh = nums[high];
                    while(low<high && nums[high] == lastHigh) 
                        high--;
                    
                }
            }
        }
        return result;
    }
};
