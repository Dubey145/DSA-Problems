//https://leetcode.com/problems/number-of-students-unable-to-eat-lunch

#include<stack>
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        queue<int> stud;
        
        for(int number : students)
        {
            stud.push(number);
        }
        
        int rotation = 0, i=0;
        while((!stud.empty()) && rotation < stud.size())
        {
            if(stud.front() == sandwiches[i])
            {
                i++;
                rotation = 0;
                stud.pop();
            }
            else 
            {
                rotation++;
                int current_choice = stud.front();
                stud.pop();
                stud.push(current_choice);
            }
        }
        return stud.size();
    }
};
