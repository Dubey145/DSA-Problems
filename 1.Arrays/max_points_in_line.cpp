class Solution {
public:
    int maxPoints(vector<vector<int>>& points) 
    {
        int maxCount = 0;
        for(int i = 0 ; i<points.size(); i++)
        {
            int x1 = points[i][0];
            int y1 = points[i][1];
            int temp_max = 0;
                
            unordered_map<double,int> step;
            
            for(int j = 0; j< points.size();j++)
            {
                if (j==i) continue;
                
                int x2 = points[j][0];
                int y2 = points[j][1];
                
                double nr = y2-y1;
                double dr = x2-x1;
                
                if(dr == 0)
                {
                    step[INT_MAX]++;
                    temp_max = max(temp_max, step[INT_MAX]);
                }
                else
                {
                    double slope = nr/dr;
                    step[slope]++;
                    temp_max = max(temp_max, step[slope]);
                }                
            }
            maxCount = max(maxCount, temp_max+1);
        }
        return maxCount;
    }
};
