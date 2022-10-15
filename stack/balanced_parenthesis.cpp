// problem link : balanced parenthesis
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

bool balanced(string s)
    {
        stack<char> parenthesis;
        for(char c : s)
            {
                if(c == '(' || c =='{' || c =='[')
                    parenthesis.push(c);
                
                else if(c == '}')
                    if(parenthesis.top() == '{') parenthesis.pop();
                else if (c == ')')
                    if(parenthesis.top() == '(') parenthesis.pop();
                else if(c == ']')
                    if(parenthesis.top() == '[') parenthesis.pop();
                else 
                    return false;
            }
        if(parenthesis.empty())
            return true;
        return false;
    }

int main()
    {

        string s = "()";
        cout<<balanced(s);
        return 0;
    }