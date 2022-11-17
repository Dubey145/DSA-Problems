//https://leetcode.com/problems/squares-of-a-sorted-array/submissions/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> result(nums.size());
        int start = 0, end = nums.size() - 1;
        
        for (int index = nums.size() - 1; index >= 0; index--) 
        {
            if (abs(nums[end]) > abs(nums[start])) 
            {
                result[index] = nums[end] * nums[end];
                end--;
            }
            else 
            {
                result[index] = nums[start] * nums[start];
                start++;
            }
        }
        return result;
    }
};
