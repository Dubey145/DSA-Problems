//https://leetcode.com/problems/destination-city/submissions/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        unordered_set<string> start;
        unordered_set<string> end;
        
        for(int i = 0; i < paths.size(); i++)
        {
            start.insert(paths[i][0]);
            end.insert(paths[i][1]);
        }
        
        for(auto it : end)
        {
            if(start.find(it) == start.end())
            {
                return it;
            }
        }
        return "";
    }
};
