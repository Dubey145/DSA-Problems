//https://leetcode.com/problems/determine-if-string-halves-are-alike/

class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int firstHalf = 0;
        int secondHalf = 0;
        unordered_set<int> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i = 0;i<s.size()/2;i++)
        {
            if(vowels.find(s[i])!=vowels.end())
                firstHalf++;
        }
        for(int i = s.size()/2;i<s.size();i++)
        {
            if(vowels.find(s[i])!=vowels.end())
                secondHalf++;
        }
        return firstHalf == secondHalf;
    }
};
