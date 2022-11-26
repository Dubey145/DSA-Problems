//https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        //unordered_map<int,int> prevSum;
        int len = INT_MAX;
        int currentSum = 0;
        int start = 0;
        
        for(int end = 0; end<nums.size() ; end++)
        {
            currentSum += nums[end];
            
            while(currentSum>=target)
            {
                len = min(len, end-start+1);
                currentSum-=nums[start];
                start++;
            }
//             if(currentSum == target) // it can be greater also
//             {
                
//                 len = min(len, end-start+1);
//             }
        }
        if(len == INT_MAX) return 0;
        
        return len;
    }
};
