//https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        int multiply = 1;
        int numberOf0 = 0;
        int index0; 
        for(int i = 0; i< nums.size(); i++)
        {
            if(nums[i] == 0) 
            {
                numberOf0++;
                index0 = i;
                continue;
            }
            multiply = nums[i] * multiply;
        }
        
        if(numberOf0>1) 
            return result;
        
        if(numberOf0 == 1)
        {
            result[index0] = multiply;
            return result;
        }
        
        for(int i = 0; i < nums.size();i++)
        {
            result[i] = (multiply/nums[i]);
        }
        
        return result;
    }
};
