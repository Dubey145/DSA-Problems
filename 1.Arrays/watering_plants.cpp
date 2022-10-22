//https://leetcode.com/problems/watering-plants/

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int max_cap = capacity;
        int total_steps = 0;
        int current_steps = 0;
        for(int req : plants)
        {
            if(req<capacity)
            {
                total_steps += 1;
                current_steps+=1;
                capacity-=req;
            }
            else if(req>capacity)
            {
                total_steps += (2*(current_steps))+1;
                current_steps +=1;
                capacity = max_cap;
                capacity-=req;
            }
            else // if(req = cap)
            {
                //total_steps += (2*(current_steps))+1;
                total_steps +=1;
                current_steps+=1;
                capacity = 0;
            }
        }
        return total_steps;
    }
};
