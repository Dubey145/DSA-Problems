// problem link : https://leetcode.com/problems/lemonade-change/
//lemony lemonade 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool lemonadeChange(vector<int>& bills) 
    {
        int fives = 0;
        int tens = 0;
        int twenties = 0;
        for(int i = 0 ; i<bills.size();i++)
            {
                if(bills[i] == 5) fives++;

                else if(bills[i] == 10)
                    {
                        if(fives<1)
                                return false;
                        fives--;
                        tens++;
                    }
                else
                {
                        twenties++;
                        if(tens>=1 && fives>=1)
                            {
                                tens--;
                                fives--;
                            }
                        else if(fives>=3)
                            {
                                fives -=3;
                            }
                        else 
                            {
                                return false;
                            }
                    }
            }
        return true;
    }
//M
int main()
    {
        vector<int> nums{5,5,5,10,20};
        cout<<lemonadeChange(nums);

        return 0;
    }
