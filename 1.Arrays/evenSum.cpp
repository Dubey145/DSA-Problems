//https://leetcode.com/problems/sum-of-even-numbers-after-queries

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) 
    {
        vector<int> result;
        int evenSum = 0;
        for(int number : nums) if(number%2==0) evenSum+=number;

        for(int i = 0; i< queries.size(); i++)
            {
                int oldNumber = nums[queries[i][1]];
                int newNumber = nums[queries[i][1]] + queries[i][0];

                nums[queries[i][1]] = newNumber;
                if(oldNumber %2 != 0 && newNumber %2 == 0)
                    {
                        evenSum += newNumber;
                    }
                else if(oldNumber %2 == 0 && newNumber %2 != 0)
                    {
                        evenSum -= oldNumber;
                    }
                else if(oldNumber %2 == 0 && newNumber %2 == 0)
                    {
                        evenSum -= oldNumber;
                        evenSum += newNumber;
                    }
                result.push_back(evenSum);
            }    
        return result;
    }
};
