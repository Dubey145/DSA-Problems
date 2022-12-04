//https://leetcode.com/problems/divide-players-into-teams-of-equal-skill

class Solution {
public:
    long long dividePlayers(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        // 1 2 3 3 4 5 
        int skillSum = nums[0]+nums[nums.size()-1]; // 6
        long long currentProduct = 1;
        long long productSum = 0;
        
        for(int i = 0;i<nums.size()/2;i++)
        {
            if(nums[i] + nums[nums.size()-i-1] != skillSum)
                return -1;
            else
            {
                currentProduct = nums[i] * nums[nums.size()-i-1]; // 4*2 8
                productSum +=currentProduct;//5 + 8 +               
            }
        }
        return productSum;
    }
};
