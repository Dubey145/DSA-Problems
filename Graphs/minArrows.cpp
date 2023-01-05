//https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/871741235/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(),points.end());
        int arrows = 0;
        int end = points[0][1];
        for(int i = 1; i < points.size(); i++)
            { 
                if(points[i][0] > end)
                    {
                        arrows++;
                        end = points[i][1];
                    }
                else
                    {
                        end = min(end,points[i][1]);
                    }
            }

        return arrows+1;
    }
};
