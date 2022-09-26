//https://leetcode.com/problems/merge-similar-items/
//
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) 
    {
        vector<vector<int>> ret;
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        
        for(int i = 0; i < items1.size(); i++)
        {
            map1.insert({items1[i][0],items1[i][1]});
        }
        
        for(int i = 0; i < items2.size(); i++)
        {
            map2.insert({items2[i][0],items2[i][1]});
        }

        for(auto it : map2)
        {
            if(map1.find(it.first) != map1.end())
            {
                map1[it.first] += it.second;
            }
            else 
            {
                map1.insert({it.first,it.second});
            }
        }
        
        for(auto it : map1)
        {
            ret.push_back({it.first,it.second});
        }
        sort(ret.begin(),ret.end());
        return ret;
    }
};
