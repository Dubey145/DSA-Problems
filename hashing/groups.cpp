//https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to
/*
create a map of vectors
and push index values to their group vectors
when the vector becomes full puch it into the 2d list and clear the group vector
result can be in any order so no sorting is required
*/

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) 
    {
        unordered_map<int,vector<int>> map;
        vector<vector<int>>result;
        for(int i = 0;i<nums.size();i++)
        {
            map[nums[i]].push_back(i);
            if(map[nums[i]].size() == nums[i])
            {
                result.push_back(map[nums[i]]);
                map[nums[i]].clear();
            }
        }
        return result;
    }
};
