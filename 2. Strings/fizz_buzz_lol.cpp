// problem link : https://leetcode.com/problems/fizz-buzz/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> fizzBuzz(int n) 
    {
        vector<string> answer;
        for(int i = 0; i <n; i++)
            {
                if(i%3 == 0 && i%5 == 0)
                    answer.push_back("FizzBuzz");
                else if(i%3 == 0 && i%5 != 0)
                        answer.push_back("Fizz");
                else if(i%3 != 0 && i%5 == 0) 
                         answer.push_back("Buzz");
                else 
                    answer.push_back(to_string(i+1));       
            }
        return answer;
    }
int main()
    {
        vector<int> nums{};


        return 0;
    }