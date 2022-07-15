// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
/*

stock price on diiferent days goven, maximize the profit 
one approach is the bruteforce method, we calculate all subs 

*/
int main()
    {
        //int prices[] = {7,6,5,4,3,2};
        
        vector<int> prices;
        prices.push_back(7);
        prices.push_back(6);
        prices.push_back(9);
        prices.push_back(5);
        prices.push_back(3);
        prices.push_back(2);
        int size = prices.size();
        /*
        int max= 0;
        for(int i = 0;i<size;i++)
            {
                for(int j = i;j<size;j++)
                    {
                        if((prices.at(j) - prices.at(i)) > max)
                            {
                                max = prices.at(j) - prices.at(i);
                            }
                    }
            }
        cout<< max;

        //optimal - keep track of the minimum element at the left side and subtract it with the current element to get the profit
        */
        int maxProfit = 0;
        int minimum = INT_MAX;
        
        for(int i = 0;i<prices.size();i++)
            {
                minimum = min(minimum, prices.at(i));
                maxProfit = max(maxProfit,prices.at(i) - minimum);
            }
        cout<< maxProfit;

        return 0;
    }