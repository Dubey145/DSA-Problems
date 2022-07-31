//https://leetcode.com/problems/merge-intervals/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> merged;
        sort(intervals.begin(),intervals.end());
        int size = intervals.size();

        for(int i = 0; i<size;i++)
            {

                if(merged.empty())
                    merged.push_back(intervals[i]);

                else
                    {
                        vector<int> &v=merged.back();

                        int ending_val = v[1];

                        if(intervals[i][0]<= ending_val)
                            {
                                v[1] = max(ending_val,intervals[i][1]);
                            }
                        else
                            merged.push_back(intervals[i]);
                    
                    }

            }
        

        return merged;
    }

int main()
    {
        //pass a 2d vector here
    }