class Solution {
//https://leetcode.com/contest/biweekly-contest-94/submissions/detail/864782765/

public:
    int parse(vector<int> nums)
    {
        bool flag = false;
        int count = 0;
        int maxCount = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                count = 0;
                flag = true;
            }
            if(nums[i] == 0 && flag)
            {
                count++;
            }
            if(nums[i] == -1 && flag )
            {
                maxCount = max(maxCount, count);
                count = 0;
                flag = false;
            }
        }
        return maxCount;
    }
    int captureForts(vector<int>& forts) 
    {
        int a = parse(forts);
        reverse(forts.begin(),forts.end());
        int b = parse(forts);
        
        return max(a,b);
    }
};
