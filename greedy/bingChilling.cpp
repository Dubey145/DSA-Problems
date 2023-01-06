//max bingChilling

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        sort(costs.begin(),costs.end());
        int bingChilling = 0;
        for(int cost : costs)    
            {
                if(cost <= coins)
                    {
                        coins -= cost;
                        bingChilling++;
                    }
                else
                    break;
            }
        return bingChilling;
    }
};
