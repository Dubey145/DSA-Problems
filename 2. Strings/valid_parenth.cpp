#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s) {
    stack<char> data;
    if(s[0] == ']' || s[0] == '}' || s[0] == ')')
        return false;

            for(int i = 0; i < s.length(); i++)
                {
                    if(s[i] == '[' || s[i] == '{' || s[i] == '(')
                        {
                            data.push(s[i]);
                        }
                    else if(s[i] == ']' || s[i] == '}' || s[i] == ')') // dont pop at spaces
                        {
                            char c;
                            if(!data.empty())
                                 c = data.top();
                            else 
                                return false;
                                if(c == '{')
                                    if(s[i] != '}')
                                        {
                                            return false;
                                        }
                                        
                                if(c == '(')
                                    if(s[i] != ')')
                                        {
                                            return false;
                                        }
                                        
                                if(c == '[')
                                    if(s[i] != ']')
                                        {
                                            return false;
                                        }
                                data.pop();                            
                            
                    }    
        }
        if(data.empty())
                {
                    return true;
                }
        return false;
       
    }

int main(){ 
    stack<char> data;
    string str; 
    getline(cin, str); 
    cout<<isValid(str);
}