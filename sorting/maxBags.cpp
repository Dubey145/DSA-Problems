//https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks/submissions/866363332/

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) 
    {
        vector<int>toMax;

        for(int i = 0; i < capacity.size(); i++)
            {
                toMax.push_back(capacity[i] - rocks[i]);
            }
        int fullBags = 0;
        
        sort(toMax.begin(),toMax.end());

        for(int i = 0; i < toMax.size(); i++)
            {
                if(toMax[i]>additionalRocks) break;

                if(toMax[i] == 0) fullBags++;
                else 
                    {
                        additionalRocks -= toMax[i];
                        fullBags++;
                    }
            }
        
        return fullBags;
    }
};
