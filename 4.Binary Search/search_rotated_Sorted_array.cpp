//https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start = 0;
        int end  = nums.size()-1;
        int mid;
        
        while(start<=end)
        {
            mid = start+((end-start)/2);
            if(nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid]>=nums[0]) // in the first sequence
            {
                if(target> nums[mid] || target < nums[0])
                    start = mid + 1;
                else 
                    end = mid -1;
            }
            else // in the second sequence
            {
                if(target < nums[mid] || target > nums[nums.size()-1]) 
                    end = mid-1;
                else
                    start = mid + 1;
            }
        }
        return -1;
    }
};
