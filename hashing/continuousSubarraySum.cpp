//https://leetcode.com/problems/continuous-subarray-sum/
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> remainders;
        remainders[0] = -1;
        
        int currentSum = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            currentSum += nums[i];
            int remainder = currentSum%k;
            
            if(remainders.find(remainder) != remainders.end())
            {
                if(i-remainders[remainder]>=2) // means the length of the subarray is more than 1
                {
                    return true;
                }
            }
            else
            {
                remainders[remainder] = i;
            }
        }
        return false;
    }
};
