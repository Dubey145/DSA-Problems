// https://leetcode.com/problems/remove-element/

#include<iostream>
#include<vector>
using namespace std;

int main()
    {
        vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(1);
        numbers.push_back(2);
        numbers.push_back(5);
        numbers.push_back(0);
        numbers.push_back(10);
        numbers.push_back(20);

        int element = 1;
        int j = 0;
        int size = numbers.size();
        for(int i = 0;i<size;i++)
        {
            if(numbers.at(i) != element){
                numbers.at(j) = numbers.at(i);
                j++;
            }
        }
    return j;
        return 0;
    }