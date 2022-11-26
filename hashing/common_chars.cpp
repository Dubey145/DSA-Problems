https://leetcode.com/problems/find-common-characters/submissions/

class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<int> count(26,INT_MAX);
        vector<string> result;
        
        for(auto str : words)
        {
            vector<int> frequency(26,0);
            for(char c : str)
            {
                frequency[c-'a']++;
            }
            for(int i = 0; i< 26; i++)
            {
                count[i] = min(count[i],frequency[i]);
            }
        }
        for(int i = 0; i < 26; i++)
        {
            for(int j = 0; j < count[i];j++)
            {
                result.push_back(string(1,i+'a'));
            }
        }
        return result;
    }
};
