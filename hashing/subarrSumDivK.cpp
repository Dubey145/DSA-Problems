//https://leetcode.com/problems/subarray-sums-divisible-by-k/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int currentSum = 0;
        int count = 0;
        unordered_map<int,int> remainders;
        remainders[0] = 1;

        for(auto number : nums)
        {
            currentSum += number;
            
            int remainder = currentSum%k;
            
            if(remainder<0) remainder += k; // to handle negative remainders
            
            if(remainders.find(remainder) != remainders.end())
            {
                count += remainders[remainder];
            }
            
            remainders[remainder]++;
            
        }
        
        return count;
    }
};
