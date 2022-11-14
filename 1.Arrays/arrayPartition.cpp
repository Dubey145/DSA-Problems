//https://leetcode.com/problems/partition-array-according-to-given-pivot/
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        vector<int>pvt;
        vector<int>more;
        
        for(int number : nums)
        {
            if(number<pivot)
            {
                less.push_back(number);
            }
            else if(number == pivot)
            {
                pvt.push_back(number);
            }
            else
            {
                more.push_back(number);
            }
        }
        for(int piv : pvt)less.push_back(piv);
        for(int mor : more)less.push_back(mor);
        return less;
    }
};
