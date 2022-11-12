//https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/

class Solution {
public:
    int checkPoint(vector<vector<int>>& points, vector<int> circle)
    {
        int counter = 0;
        for(int i = 0; i< points.size();i++)
        {
            int a = (points[i][0]-circle[0])*(points[i][0]-circle[0]);
            int b = (points[i][1]-circle[1])*(points[i][1]-circle[1]);
            if(a+b<=(circle[2]*circle[2]))
                counter++;
        }
        return counter;
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) 
    {
        vector<int> result;
        for(int i = 0; i<queries.size();i++) 
        {
            int count = checkPoint(points,queries[i]);
            result.push_back(count);
        }
        return result;
    }
};
