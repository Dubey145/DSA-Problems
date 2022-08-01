// problem link : https://leetcode.com/problems/can-place-flowers/
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int size = flowerbed.size();
        int max_limit = size%2 == 0 ? size/2 : (size/2)+1;
    
        // if(size%2==0)
        //     {
        //         max_limit = size/2;
        //     }
        // else 
        //     {
        //         max_limit = (size/2) + 1;
        //     }
        int current_sum = accumulate(flowerbed.begin(),flowerbed.end(),0) + n;

        return current_sum<=max_limit;

        //fails for some edge cases like [0,1,0]
    }

bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int count = 0;
        for(int i = 0 ; i< flowerbed.size();i++)
            {
                if(flowerbed[i] == 0)
                    {
                        int prev = ((i == 0 || flowerbed[i-1] == 0)? 0 : 1); // for the first element out of bounds error will occur if i = 0 we can consider the last element to be 0
                        int next = ((i == flowerbed.size()-1 ||flowerbed[i+1] == 0)? 0 : 1);
                        // for the last element out of bounds error will occur,if i is the last element we can consider the next element to be 0;


                        if(prev == 0 && next == 0) 
                            {
                                count++;
                                flowerbed[i] = 1;
                            }
                    }
                if(count >=n) return true;
            }
        return false;

    }

int main()
    {
        vector<int> nums{1,0,0,0,1};
        cout<<canPlaceFlowers(nums,1);

        return 0;
    }