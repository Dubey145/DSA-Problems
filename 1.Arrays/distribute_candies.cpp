// problem link : https://leetcode.com/problems/distribute-candies/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int distributeCandies(vector<int>& candyType) 
    {
        int limit = candyType.size()/2;
        int unique_candies = 1;

        sort(candyType.begin(),candyType.end());
        int current = candyType[0];

        for(int i = 0 ; i < candyType.size();i++)
            {
                if(candyType[i] != current)
                    {
                        if(unique_candies<limit)
                            {
                                unique_candies++;
                                current = candyType[i];
                            }
                        else 
                            return unique_candies;
                    }
            }
        return unique_candies;
    }
int main()
    {
        vector<int> nums{1,1,2,2,3,3};
        cout<<distributeCandies(nums);


        return 0;
    }