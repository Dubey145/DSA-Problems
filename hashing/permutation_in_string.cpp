//https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s1.size()>s2.size()) return false;
        vector<int> s1hash(26,0);
        vector<int> s2hash(26,0);
        int left = 0;
        int right = 0;
        
        while(right < s1.size()) // initially hash the first window
        {
            s1hash[s1[right] - 'a']++;
            s2hash[s2[right] - 'a']++;
            right++;
        }
        
        //now use sliding window
        while(right<s2.size())
        {
            if(s1hash == s2hash) return true;
            
            if(right != s2.size())
            {
                s2hash[s2[right] - 'a']++;
                right++;
            }
            s2hash[s2[left]-'a']--;
            left++;
        }
        return s1hash == s2hash;
    }
};
