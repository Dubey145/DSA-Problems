#include<iostream>
#include<vector>
using namespace std;

vector<int> end_negative(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> negative;
        vector<int> result;
        //vector<int> result;

        for(int i = 0; i < size; i++)
            {
                if(nums.at(i)>0)
                    {
                        result.push_back(nums.at(i));
                    }
                else
                    {
                        negative.push_back(nums.at(i));
                    }
            }
        for(int i = 0; i < negative.size(); i++)
            {
                result.push_back(negative.at(i));
            }
        
        for(int i = 0; i < result.size(); i++)
            {
                cout<<result[i]<<" ";
            }
        return result;
    }
//works

vector<int> partition_algo(vector<int> &nums) 
    {
        int size = nums.size();
        int i = -1;
        int j = 0;
        int pivot = 0;

        for(j = 0; j<size; j++)
            {
                if(nums[j]>pivot)
                    {
                        i++;
                        swap(nums[i],nums[j]);
                    }
            }
        for(int i = 0; i<size; i++)
            {
                cout<<nums[i]<<" ";
            }
        return nums;
    }
int main() 
    {
        vector<int> nums;
      
        nums.push_back(1);
        nums.push_back(-1);
        nums.push_back(3);
        nums.push_back(-7);
        nums.push_back(-5);
        nums.push_back(11);
        nums.push_back(6);

        end_negative(nums);
        cout<<endl;

        partition_algo(nums);
        return 0;
    }