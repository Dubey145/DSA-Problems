class Solution {
public:
    string reverseVowels(string s) 
    {
        unordered_set<char> vowel({
            'a','e','i','o','u',
            'A','E','I','O','U'
        });
        int start = 0;
        int end = s.size()-1;
        while(start<=end)
        {
            if(vowel.find(s[start])!=vowel.end() && vowel.find(s[end]) != vowel.end())
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(vowel.find(s[start])!=vowel.end())
            {
                end--;
            }
            else if(vowel.find(s[end]) != vowel.end())
            {
                start++;
            }
            else 
            {
                start++;
                end--;
            }
        }
        return s;
    }
};
