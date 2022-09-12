class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> map;
        for(int i = 0 ; i < nums.size(); i ++)
        {
            for(int j = 0 ; j < nums[i].size();j++)
            {
                map[nums[i][j]]++;
            }
        }
        //All the values of nums[i] are unique.
        vector<int> result;
        for(auto number : map)
        {
            cout<<number.first<<" "<<number.second<<endl;
            if(number.second == nums.size())
                    result.push_back(number.first);
        }
        sort(result.begin(),result.end());
        return result;
    }
};
