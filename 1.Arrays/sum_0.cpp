// problem link : https://leetcode.com/submissions/detail/767648807/

class Solution {
public:
    vector<int> sumZero(int n) {
        //uwu
        int positive = 1;
        int i =0;
        vector<int> array(n,0);
        
        while(i<n-1)
        {
            array[i++] = positive * -1;
            array[i++] = positive++;
        }
        return array;
    }
};