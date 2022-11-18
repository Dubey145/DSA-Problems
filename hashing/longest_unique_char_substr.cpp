//https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> chars;
        int j = 0;
        int maxLength = 0;
        int currentLength = 0;
        
        for(char c : s)
        {
            chars[c]++;
            currentLength++;
            while(chars[c]>1)
            {
                chars[s[j]]--;
                j++;
                currentLength--;
            }
            maxLength = max(maxLength,currentLength);
        }
        return maxLength;
       
    }
};
