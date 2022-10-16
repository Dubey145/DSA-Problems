// problem link : previous greater element
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;


//optimized
vector<int> prevGreater(vector<int> nums)
    {
        vector<int> result;
        stack<int> s;
        s.push(nums[0]);
        result.push_back(-1);

        for(int i = 1 ; i<nums.size();i++)
            {
                while(!s.empty() && s.top() <= nums[i])
                    s.pop();
                
                int previous_greater = (s.empty())? -1 : s.top();
                result.push_back(previous_greater);
            }
        return result;
    }


int main()
    {
        vector<int> nums{15,10,18,12,4,6,2,8};
        stack<int> previous;
        vector<int> result;
        result.push_back(-1);
        previous.push(nums[0]);

        for(int i = 1; i <nums.size(); i++)
            {
                if(nums[i]<previous.top())
                    {
                        result.push_back(previous.top());
                        previous.push(nums[i]);
                    }        
                else
                    {
                       
                        while(!previous.empty() && previous.top()<nums[i])
                            {
                                previous.pop();
                            }
                        if(previous.empty())
                            {
                                result.push_back(-1);                                   previous.push(nums[i]);
                            }
                        else
                            {
                                result.push_back(previous.top());
                                previous.push(nums[i]);
                            }
                    }
            }
        for(int number : result)
            {
                cout<<number<<" ";
            }
        
        return 0;
    }