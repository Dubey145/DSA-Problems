//https://leetcode.com/problems/find-and-replace-pattern/

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> result;
        for(int i =0; i < words.size();i++)
        {
            unordered_map<char,char>map1;
            unordered_map<char,char>map2;
   
            for(int j = 0; j < words[i].size();j++)
            {
                map1[pattern[j]] = words[i][j];
                map2[words[i][j]] = pattern[j];
            }
            bool push = true;
            for(int k = 0; k <words[i].size(); k++)
            {
                if(map1[pattern[k]] != words[i][k] || map2[words[i][k]] != pattern[k])
                {
                    push = false;
                }
            }
            if(push)
            {
                result.push_back(words[i]);
            }
        }
        return result;
    }
};
