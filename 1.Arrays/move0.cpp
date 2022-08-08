//https://leetcode.com/problems/move-zeroes/submissions/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //not in place
        vector<int> result(nums.size(),0);
        int index = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                result[index++] = nums[i];
            }
        }
        nums = result;
    }
};

//in place
