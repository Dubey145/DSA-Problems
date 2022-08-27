// problem link : count the frequencies of elements 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void freq(vector<int> nums) 
    {
        int counter = 0;
        int start_element = nums[0];
        cout<<start_element<<": ";
        for(int i = 0 ; i < nums.size() ;i++)
            {
                if(nums[i] == start_element)
                    counter++;
                else  // not equal means new element has come 
                    {
                        start_element = nums[i];
                        cout<<counter<<endl;
                        counter = 1;
                        cout<<start_element<<": ";
                    }
            }
        cout<<counter<<endl;
    }

int main()
    {
        vector<int> nums{10,20,30};
        freq(nums);

        return 0;
    }