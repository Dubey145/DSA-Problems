//https://leetcode.com/problems/minimum-operations-to-make-array-equal/
class Solution {
public:
    int minOperations(int n) 
    {
        int value = 0;
        if((n&1) == 1) value = (2 * (n/2))+1;
        else value = (2 * ((n-1)/2))+2;
        
        cout<<value;
        int i = 0;
        int counter = 0;
        while(((2*i)+1)<=value)
        {
            counter += (value - ((2*i)+1));
            i++;
        }
        return counter;
    }
};
