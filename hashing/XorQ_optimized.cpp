//https://leetcode.com/problems/xor-queries-of-a-subarray/

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        unordered_map<int,int> xorMap;
        vector<int> result;
        
        int currentXor = arr[0];
        xorMap[0] = arr[0];
        for(int i = 1; i< arr.size();i++)
        {
            currentXor ^= arr[i];
            xorMap[i] = currentXor;
        }
        
        for(int i = 0; i< queries.size();i++)
        {
            int required = xorMap[queries[i][1]] ^ xorMap[queries[i][0]-1];
            result.push_back(required);
        }
        return result;
    }
};
