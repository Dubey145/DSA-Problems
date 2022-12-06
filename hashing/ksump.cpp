//https://leetcode.com/problems/max-number-of-k-sum-pairs
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        unordered_map<int,int>elements;
        int operations = 0;
        for(auto number : nums)
        {
            if(elements[k-number] == 0) // required number to pair is not in the map
                elements[number]++;
            
            else // pairing elements is present
                {
                    elements[k-number]--;
                    operations++;
                }
        }
        return operations;
    }
};
