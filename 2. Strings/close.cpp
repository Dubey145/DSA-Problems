//https://leetcode.com/problems/determine-if-two-strings-are-close/

class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        vector<int> freq1(26,0),freq2(26,0);
        vector<int> unique1(26,0),unique2(26,0);
        
        for(char c : word1) 
        {
            freq1[c-'a']++;
            unique1[c-'a'] = 1;
        }
        for(char c : word2) 
        {
            freq2[c-'a']++;
            unique2[c-'a'] = 1;
        }
        
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        
        return freq1==freq2 && unique1==unique2;
        
    }
};
