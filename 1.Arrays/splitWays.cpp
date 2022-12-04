//https://leetcode.com/problems/number-of-ways-to-split-array/submissions/

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) 
    {
        long long rightSum = 0;
        int splits = 0;
        for(auto number : nums) rightSum += number;
        
        long long leftSum = 0;
        
        for(int i = 0; i<nums.size();i++)
        {
            leftSum += nums[i];
            rightSum -= nums[i];
            
            if(leftSum >= rightSum && i!=nums.size()-1)
                splits++;
        }
        return splits;
    }
};
