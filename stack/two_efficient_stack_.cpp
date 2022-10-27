// problem link : efficient implementation of 2 stacks in 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class twoStacks
    {
        private:
            int *array;
            int capacity;
            int top1,top2;
        public:
            twoStacks(int size)
                {
                    array = new int[size];
                    capacity = size;
                    top1 = -1;
                    top2 = size;
                }
            void push1(int element)
                {
                    top1++;
                    if(top1>top2)
                        {
                            cout<<"stack is full";
                            return;
                        }
                    array[top1] = element;
                }
            void push2(int element)
                {
                    top2--;
                    if(top2<top1)
                        {
                            cout<<"stack is full";
                        }
                    array[top2] = element;
                }
            void pop1()
                {
                    if(top1 == -1)
                    {
                        cout<<"stack is empty";
                    }
                    else 
                        top1--;
                }
            void pop2()
                {
                    if(top2 == capacity)
                    {
                        cout<<"stack is empty";
                    }
                    else 
                        top2++;
                }    
            int peek1()
                {
                    if(top1 != -1)
                        return array[top1];
                    else
                        cout<<"stack is empty";
                }
            int peek2()
                {
                    if(top1 != capacity)
                        return array[top2];
                    else
                        cout<<"stack is empty";
                }
    };

int main()
    {
        vector<int> nums{};


        return 0;
    }