//https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/submissions/871359878/

class Solution {
public:
    int maxVowels(string s, int k) 
    {
        unordered_set<char>vowels{'a','e','i','o','u'};
        int start = 0;
        int maxCount = -1;
        int currentCount = 0;
        for(int i = 0; i < k; i++)
            if(vowels.find(s[i]) != vowels.end())
                currentCount++;

        maxCount = currentCount;

        for(int i = k; i < s.size(); i++)
            {
                if(vowels.find(s[start]) != vowels.end())
                    {
                        currentCount--;
                    }
                if(vowels.find(s[i]) != vowels.end())
                    {
                        currentCount++;
                    }
                start++;
                maxCount = max(maxCount, currentCount);
            }
        return maxCount;
    }
};
