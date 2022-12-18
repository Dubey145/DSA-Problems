class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) 
    {
        vector<int> days(nums.size());
        stack<pair<int,int>> s;

        for(int i = 0; i < nums.size(); i++)
            {
                while(!s.empty() && nums[i]>s.top().first)
                    {
                        days[s.top().second] = i-s.top().second;
                        s.pop();
                    }
            
                s.push({nums[i],i});
                    
            }
        days[nums.size()-1] = 0;
        return days;
    }
};
