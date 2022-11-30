//https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int>elements;
        unordered_set<int>freqs;
        for(int number : arr)
        {
            elements[number]++;
        }
        for(auto it : elements)
        {
            freqs.insert(it.second);
        }
        return elements.size()==freqs.size();
    }
};
