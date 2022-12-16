//https://leetcode.com/problems/implement-queue-using-stacks/submissions/860731599/

class MyQueue {
public:
    //take the bottom of the stack as the rear 
    stack<int>s1;
    stack<int>s2;

    MyQueue() 
    {

    }
    
    void push(int x) 
        {
            while(!s1.empty())
                {
                    int current = s1.top();
                    s1.pop();
                    s2.push(current);
                }
            s1.push(x);
            while(!s2.empty())
                {
                    int current = s2.top();
                    s2.pop();
                    s1.push(current);
                }
        }
    
    int pop() 
        {
            int deleted = s1.top();
            s1.pop();
            return deleted;
        }
    
    int peek() 
    {
        return s1.top();    
    }
    
    bool empty() 
    {
        return s1.empty();    
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
