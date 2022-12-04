//https://leetcode.com/problems/minimum-average-difference/

class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    {
        long long int rightSum = 0;
        for(auto number : nums) rightSum +=number;
        
        int minDiff = INT_MAX;
        int minIndex = 0;
        int currentDiff;
        
        long long leftSum = 0;
        for(int i = 0; i <nums.size();i++)
        {
            leftSum+=nums[i];
            rightSum -= nums[i];
            
            long long left = (leftSum/(i+1));
            long long right;
            if(i != nums.size()-1)
                right = rightSum/(nums.size()-i-1);
            else 
                right = 0;
            
            currentDiff = abs(left-right);
            
            if(currentDiff < minDiff)
            {
                minDiff = currentDiff;
                minIndex = i;
            }
        }
        return minIndex;
        
    }
};
