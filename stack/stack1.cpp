// problem link : Stack - works like a closed box - LIFO last in first out
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
operations happen on the top 
push - insert
pop- delete
size - returns size of the stack
peek - returns top item
empty - returns a boolean value
overlow - when push called on a full stack
underflow - when pop or peek is called on empty stack

push and pop become linear operations thats why we do it at the end of the array or the top
cpp STL uses vector to implement stack which makes it a variable size stack

Applications
1. function call stack
2. Checking balanced parenthesis
3. Reversing items
4. infix to postfix/prefix
5. evaluation of postfix and prefix
6. stock span problems
7. undo/redo in text editors or forward/backward in browser
*/

class myStack
    {
        private :
        int max_len;
        int *stack;
        int top;
        int stack_size;//will be top+1

        public:
        myStack(int max_len)
            {
                this->max_len = max_len;
                int *stack = new int[max_len]; // if we dont want a fixed size stack just use a vector
                top = -1;
                stack_size = 0;
            }
        void pop()
            {
                if(top == -1)
                    {
                        cout<<"stack is empty \n";
                        //the stl class has an undefined behaviour for popping on an empty stack
                        //java throws an exception.
                    }
                else 
                    {
                        top--;
                        stack_size--;
                    }
            }
        void push(int element)
            {
                if(stack_size == max_len)
                    {
                        cout<<"stack is full \n";
                    }
                else 
                    {
                        stack[top] = element;
                        stack_size++;
                        top++;
                    }
            }
        void peek()
            {
                if(stack_size!=0)
                    {
                        cout<<stack[top-1]<<endl;
                    }
                else 
                    cout<<"empty stack\n";
            }
        bool empty()
            {
                if(stack_size == 0) return true;

                return false;
            }
        int size() {return stack_size;}
    };

int main()
    {
        myStack s(3);
        s.pop();
        s.push(5);
        s.push(15);
        s.push(25);

        cout<<s.size()<<endl;
        s.peek();
        s.pop();
        s.peek();
        s.push(22);
        s.peek();
        s.push(95);
        return 0;
    }