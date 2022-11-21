//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length()!=t.length()) return false;
        
        unordered_map<char,int> freq1;
        
        for(char c : s)
            freq1[c]++;
        
        
        for(char c : t)
        {
            if(freq1.find(c) == freq1.end() || freq1[c]<=0)
                return false;
            else
                freq1[c]--;
        }
        return true;
    }
};
