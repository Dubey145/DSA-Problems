//https://leetcode.com/problems/truncate-sentence/

class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        string result = "";
        int space = 0;
        int i =0;
        while(space != k && i <s.size())
        {
            if(s[i] == ' ')
            {
                space++;
                if (space == k)
                    break;
            }
            cout<<result<<endl;
            result+=s[i];
            i++;
        }
        return result;
    }
};
