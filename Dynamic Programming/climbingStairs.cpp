class Solution {
public:
    unordered_map<int,int> map;
    int climbStairs(int n) 
    {
        if(n == 0) return 1;
        if(n < 0) return 0;

        if(map.find(n) != map.end())
            return map[n];
        
        return map[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};
