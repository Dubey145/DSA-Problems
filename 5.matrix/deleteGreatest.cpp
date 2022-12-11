//https://leetcode.com/contest/weekly-contest-323/

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& nums) 
    {
        int maxDeleted = -1;
        int deleted = 0;
        int deletions = nums.size() * nums[0].size();
        while(deletions)
        {
            maxDeleted = -1;
            for(int i = 0; i< nums.size();i++)
            {
                int rowMax = -1;
                for(int j = 0; j< nums[i].size();j++)
                {
                    if(nums[i][j] == -2) continue;

                    rowMax = max(nums[i][j],rowMax);
                }
                for(int j = 0; j<nums[i].size();j++)
                {
                    if(nums[i][j] == rowMax)
                    {
                        nums[i][j] = -2;
                        break;
                    }
                }
                maxDeleted = max(maxDeleted, rowMax);
                deletions--;
            }        
            deleted += maxDeleted;
            
            
        }
        return deleted;
        
    }
};
