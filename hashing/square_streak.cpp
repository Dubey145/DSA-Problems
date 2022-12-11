//https://leetcode.com/problems/longest-square-streak-in-an-array
class Solution {
public:
    int longestSquareStreak(vector<int>& nums) 
    {
        unordered_set<long long> elements(nums.begin(),nums.end());   
        long long result = -1;

        for(auto number : nums)
            {
                if(elements.find((long long) number*number)!=elements.end())
                    {
                        long long count = 2;
                        long long nextNumber = number*number;
                        while(elements.find(nextNumber*nextNumber) != elements.end())
                            {
                                count +=1;
                                nextNumber = nextNumber * nextNumber;
                            }
                        if(result<count) result = count;
                    }
            }
        return result;
    }
};
