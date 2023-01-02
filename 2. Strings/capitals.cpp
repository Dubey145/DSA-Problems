//https://leetcode.com/problems/detect-capital/submissions/869429628/

class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int capCount = 0;

        for(int i = 0; i < word.size(); i++)
            {
                if(isupper(word[i]))
                    capCount++;
            }    
        cout<<capCount;
        if(capCount == 0 || capCount == word.size()) return true;

        if(capCount == 1 && isupper(word[0])) return true;

        return false;
        
    }
};
