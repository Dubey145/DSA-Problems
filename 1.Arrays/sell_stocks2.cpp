#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
    {
        vector<int> prices;
        prices.push_back(5);
        prices.push_back(2);
        prices.push_back(7);
        prices.push_back(3);
        prices.push_back(6);
        prices.push_back(1);
        prices.push_back(2);
        prices.push_back(4);
        

        int size = prices.size();
        int maxProfit = 0;
        //Optimized
        for(int i = 1;i < size; i++)
            {
                if(prices.at(i) > prices.at(i-1))
                    {
                        maxProfit = maxProfit + (prices.at(i) - prices.at(i-1));
                    }
            }
        cout<<maxProfit; 
        return 0;
    }
