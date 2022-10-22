//https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count = 0;
        for(int i = 0; i < nums.size();i++)
        {
            for(int j = 0;j<nums.size();j++)
            {
                string temp = nums[i]+nums[j];
                if(temp.size() == target.size() && i != j)
                {
                    if(target == temp)
                        count++;
                }
            }
        }
        return count;
    }
};
