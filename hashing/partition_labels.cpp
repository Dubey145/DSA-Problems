//https://leetcode.com/problems/partition-labels/
class Solution {
public:
    int minSteps(string s, string t) 
    {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i = 0; i < s.size();i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        int counter = 0;
        
        for(auto it : m1)
        {
            if(m2.find(it.first) == m2.end())
            {
                counter+=it.second;
            }
            else 
            {
                //if the char was found 
                if(it.second>m2[it.first])
                {
                    counter+= it.second - m2[it.first];
                }
            }
        }
        return counter;
    }
};
