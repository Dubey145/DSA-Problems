//https://leetcode.com/problems/longest-common-prefix/submissions/857662683/

public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string word = strs[0];
        string prefix = "";
        int index = 0; 

        while(prefix.size()<=word.size())
            {
                char currentChar = word[index];
                for(int i = 0; i<strs.size();i++)
                    {
                        if(index>=strs[i].size()) return prefix;

                        if(strs[i][index]!=currentChar)
                            {
                                return prefix;
                            }
                    }
                prefix+=word[index];
                index++;
            }
        return prefix;
    }
};
