https://leetcode.com/problems/two-city-scheduling
class Solution {
public:
    static bool comparator(vector<int> a, vector<int> b)
    {
        return a[1]-a[0] > b[1]-b[0];
    }
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        sort(costs.begin(),costs.end(),comparator);
        int sum = 0;
        for(int i =0; i<costs.size();i++)
        {
            if(i<(costs.size()/2))
                sum+=costs[i][0];
            else
                sum+=costs[i][1];
        }
        return sum;
    }
};
