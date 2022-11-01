//https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> count;
        for(auto c : s)
        {
            count[c]++;
        }
        vector<pair<int,char>>freq;
        for(auto it : count)
        {
            freq.push_back({it.second,it.first});
        }
        sort(freq.begin(),freq.end(),greater<>());
        string result="";
        
        for(auto it : freq)
        {
            int counter = it.first;
            while(counter--)
            {
                result+=it.second;
            }
        }
        return result;
    }
};
