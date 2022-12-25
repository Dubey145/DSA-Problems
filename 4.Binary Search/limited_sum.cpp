//https://leetcode.com/problems/longest-subsequence-with-limited-sum/submissions/865117844/

class Solution {
public:
    int binarySearch(vector<int>& prefixSum,int target)
        {
            int start = 0;
            int end = prefixSum.size()-1;
            int mid;
            while(start<=end)
                {
                    mid = start + ((end - start)/2);
                    if(prefixSum[mid] == target)
                        return mid+1;
                    else if (prefixSum[mid] > target)
                        end = mid-1;
                    else
                        start = mid+1;
                }
            return start;
        }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        vector<int> result;    
        sort(nums.begin(),nums.end());

        vector<int>prefixSum(nums.size());
        prefixSum[0] = nums[0];
        for(int i = 1; i < nums.size(); i++) prefixSum[i] = nums[i]+prefixSum[i-1];

        for(int i = 0; i < queries.size(); i++)
            {
                int maxSize = binarySearch(prefixSum,queries[i]);
                result.push_back(maxSize);
            }

        return result;
    }
};
