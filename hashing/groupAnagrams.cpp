//https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> result;
        
        for(int i = 0; i < strs.size();i++)
        {
            string s = strs[i];
            sort(strs[i].begin(),strs[i].end());
            map[strs[i]].push_back(s);
        }
        for(auto it : map)
        {
            result.push_back(it.second);
        }
        return result;
    }
};
