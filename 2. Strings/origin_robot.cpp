// problem link : https://leetcode.com/problems/robot-return-to-origin/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool judgeCircle(string moves) 
    {
        int up=0;
        int down=0;
        int left=0;
        int right=0;
        for(int i = 0; i<moves.size();i++)
            {
                if(moves[i] == 'U') up++;
                else if(moves[i] == 'D') down++;
                else if(moves[i] == 'R') right++;
                else left++;
            }
        if(up == down && right == left)
            return true;
        return false;
    }
int main()
    {
        vector<int> nums{};


        return 0;
    }