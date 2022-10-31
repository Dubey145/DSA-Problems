class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> res;
        for(auto number : nums )
        {
            map[number]++;
        }
        for(auto it : map)
        {
            if(it.second == 1)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};
