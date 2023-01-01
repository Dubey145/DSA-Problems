//https://leetcode.com/problems/word-pattern/submissions/868971363/

class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        unordered_map<char,string> map1;
        unordered_map<string,char> map2;
        string word = "";
        int patternIndex = 0;
        s+=" ";
        for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == ' ')
                    {
                        if(map1.find(pattern[patternIndex]) != map1.end())
                            {
                                if(map1[pattern[patternIndex]] != word) 
                                    return false;
                                if(map2[word] != pattern[patternIndex])
                                    return false;
                            }
                        else
                            {
                                if(map2.find(word) != map2.end())
                                    return false;
                                map1[pattern[patternIndex]] = word;
                                map2[word] = pattern[patternIndex];
                            }
                        word = "";
                        patternIndex++;
                    }
                else
                    {
                        word += s[i];
                    }
            }  
            return true && patternIndex == pattern.size();
    }
};
