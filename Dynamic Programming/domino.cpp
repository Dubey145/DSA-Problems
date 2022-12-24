//https://leetcode.com/problems/domino-and-tromino-tiling/submissions/864871771/

class Solution {
public:
    int numTilings(int n) 
    {
        if(n<=2) return n;
        int mod = 1e9+7;
        long long stoopid = 1;
        long long first = 1;
        long long second = 2;
        for(int i = 3; i <=n; i++)
            {
                long long temp  = ((2 * second) + stoopid)%mod;
                stoopid = first;
                first = second;
                second = temp;
            }    
        return second;
    }
};
