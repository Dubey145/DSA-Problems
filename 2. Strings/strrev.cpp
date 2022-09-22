
//https://leetcode.com/submissions/detail/806204712/class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string result = "";
        for(int i = 0; i < s.size();i++)
        {
            if(s[i] !=' ')
                word+=s[i];
            if(s[i] ==' ')
            {
                reverse(word.begin(),word.end());
                result+=word;
                result+=' ';
                word = "";
            }
        }
        reverse(word.begin(),word.end());
        result+=word;
        return result;
    }
};
