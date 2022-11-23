
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        int start = 0;
        int end = nums.size()-1;
        
        while(start<=end)
        {
            if(nums[start]+nums[end] < target)
            {
                start++;
            }
            else if(nums[start]+nums[end] > target)
            {
                end--;
            }
            else
            {
                indices.push_back(start+1);
                indices.push_back(end+1);
                break;
            }
        }
        return indices;
    }
};
