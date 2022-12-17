//https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/861227400/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> s;
        for(auto token : tokens)
        {
            if(token=="/")
            {
                long long op1=s.top();
                s.pop();
                int op2=s.top();
                s.pop();
                s.push(op2/op1);
            }
            else if(token=="*")
            {
                long long op1=s.top();
                s.pop();
                int op2=s.top();
                s.pop();
                s.push(op2*op1);
            }
            else if(token=="+")
            {
                long long op1=s.top();
                s.pop();
                int op2=s.top();
                s.pop();
                s.push(op2+op1);
            }
            else if(token=="-")
            {
                long long op1=s.top();
                s.pop();
                int op2=s.top();
                s.pop();
                s.push(op2-op1);
            }
            else
            {
                s.push(stoi(token));
            }
        }
        return s.top();
    }
};
