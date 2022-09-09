// problem link : count the number of occurrences of an element in an array
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

void counter(vector<int> &nums)
    {
        unordered_map<int,int> hesmep;
        for(int i = 0 ; i <nums.size();i++)
            {
                if(hesmep.find(nums[i]) != hesmep.end()) // if the key is present
                    {
                        hesmep.find(nums[i])->second++;
                    }
                else 
                    {
                        //element is not present so we create an entry in the hashmap
                        hesmep[nums[i]] = 1;

                    }
            }       
        for(auto it = hesmep.begin(); it != hesmep.end(); it++)
            {
                cout<<it->first<<":"<<it->second<<endl;
            }
    }

int main()
    {
        vector<int> nums{1,2,2,1,1,3};
        counter(nums);

        return 0;
    }