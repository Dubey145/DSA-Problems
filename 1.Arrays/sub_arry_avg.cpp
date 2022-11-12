//https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) 
    {
        int currentSum = 0;
        int counter = 0;
        int start = 0;
        int end = k;
        for(int i = 0; i< k; i++)
        {
            currentSum +=nums[i];
        }
        if((currentSum/k)>=threshold)
        {
            counter++;
        }
        for(int i = k; i<nums.size(); i++)
        {
            currentSum-=nums[start];
            start++;
            currentSum+= nums[end];
            end++;
            if((currentSum/k)>=threshold)
            {
                counter++;
            }
        }
        return counter;
    }
};
