//https://leetcode.com/problems/sort-the-people/submissions/
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> temp = heights;
        vector<string> result;
        sort(temp.begin(),temp.end(),greater<int>());
        
        unordered_map<int,string> map;
        for(int i = 0; i < heights.size();i++)
        {
            map.insert({heights[i],names[i]});
        }
        for(int i = 0; i < temp.size();i++)
        {
            result.push_back(map[temp[i]]);
        }
        
        return result;
    }
};
