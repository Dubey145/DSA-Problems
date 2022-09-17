//leetcode : https://leetcode.com/submissions/detail/802158431/
class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>map;
        for(char c : num)
        {
            map[int(c)-48]++;
        }
        
        for(int i = 0; i < num.size();i++)
        {
            if(map[i]!=int(num[i])-48)
                return false;
        }
        
        return true;
    }
};
