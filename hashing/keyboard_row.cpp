//https://leetcode.com/problems/keyboard-row/
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int>lines;
         vector<char>letters{'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
        vector<string> result;
        for(int i =0; i < 26; i++)
        {
            if(i<10)
                lines.insert({letters[i],1});
            else if(i>18)
                lines.insert({letters[i],3});
            else
                lines.insert({letters[i],2});
        } 
        
        bool good = true;
        for(string s : words)
        {
            char ch = tolower(s[0]);
            int first = lines[ch];
            for(int i = 0 ; i<s.size();i++)
                {
                    if(lines.find(tolower(s[i]))->second != first)
                    {
                        good = false;
                        break;
                    }
                }
            if(good)
            {
                result.push_back(s);
            }
            good = true;
        }
        
        return result;
    }
};
