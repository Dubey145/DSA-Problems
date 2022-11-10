//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string
class Solution {
public:
    string removeDuplicates(string s) 
    {
        int i = 0;
        while(i<s.size())
        {
            //cout<<i<<" "<<s[i]<<" "<<s[i+1]<<" "<<s<<endl;
            if(s[i] == s[i+1])
            {
                s.erase(i,2);
                i-=1;
                if(i<0) i = 0;
            }
            else 
            {
                i+=1;
            }
        }
        return s;
    }
};
