//https://leetcode.com/problems/4sum/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> result;
        set<vector<int>>sums;
        sort(nums.begin(),nums.end());
        //if(nums[0]>target) return {};

        for(int i = 0 ; i < nums.size(); i++)
            {
                //if(nums[i]>target) continue;
                for(int j = i+1; j<nums.size();j++)
                    {
                        int start = j+1;
                        int end = nums.size()-1;
                        while(start<end)
                            {
                                vector<int> subarray;
                                subarray = {nums[i], nums[j], nums[start], nums[end]};
                                (long long )nums[i]+nums[j]+nums[start]+nums[end];

                                if((long long )nums[i]+nums[j]+nums[start]+nums[end] == target)
                                    {   
                                        if(sums.find(subarray) == sums.end())
                                            {
                                                sums.insert(subarray);
                                                result.push_back(subarray);
                                            }
                                    }
                                if((long long )nums[i]+nums[j]+nums[start]+nums[end]>target)
                                    end--;
                                else
                                    start++;
                            }
                    }
            }
        return result; 
    }
};
