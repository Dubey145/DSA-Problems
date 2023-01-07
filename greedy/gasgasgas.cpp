//https://leetcode.com/problems/gas-station/submissions/873165514/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int currentFuel = 0;
        int currentIndex = 0;
        int total = 0;

        for(int i = 0; i < gas.size(); i++)
        {
            int req =  (gas[i] - cost[i]);
            currentFuel += req;
            if(currentFuel < 0)
            {
                currentFuel = 0;
                currentIndex = i+1;
            }
            total+= req;
        }

        return total<0?-1:currentIndex;

    }
};
