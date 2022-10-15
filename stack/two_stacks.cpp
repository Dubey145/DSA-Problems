// problem link : design 2 stacks in a single array 
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

// a requirement would be cache friendliness

class twoStack
    {
        int *array;
        int size1,size2;
        
        int top1;
        int top2; 
        public :
        twoStack(int size1, int size2 )
            {
                this->size1 = size1;
                this->size2 = size2;

                array = new int[size1+size2];

                top1 = -1;
                top2 = size1-1;
            }
        void push1(int element)
            {
                if(top1 == size1-1)
                    cout<<"stack1 is full\n";
                else 
                    {
                        top1++;
                        array[top1] = element;
                    }
            }
        void push2(int element)
            {
                if(top2 == size1+size2-1)
                    cout<<"stack2 is full\n";
                else 
                    {
                        top2++;
                        array[top2] = element;
                    }
            }
        void pop1()
        {
            if(top1 == -1)
                cout<<"stack1 is empty\n";
            else 
                top1--;
        }
        void pop2()
            {
                if(top2 == size1-1)
                    cout<<"stack2 is empty\n";
                else 
                    top2--;
            }
        int getSize1()
            {
                if(top1!=-1)
                    return top1+1;
                else
                    return 0;
            }
        int getSize2()
            {
                if(top2!=size1-1)
                    return top2+1;
                else
                    return 0;
            }
        void printStack1()
            {
                int temp = top1;
                while(temp!=-1)
                    {
                        cout<<array[temp]<<" ";
                        temp--;
                    }
                cout<<endl;
            }
        void printStack2()
            {
                int temp = top2;
                while(temp>(size1-1))
                    {
                        cout<<array[temp]<<" ";
                        temp--;
                    }
                cout<<endl;
            }
    };
int main()
    {
        twoStack s(2,3);
        s.pop1();
        s.pop2();

        s.push1(10);
        s.push1(2);
        cout<<s.getSize1();
        s.printStack1();

        s.push1(3);
        s.push1(4);

        //even if we have space in the second stack we will not be able to push elements so we use a different approach where both ends are treated as tops;
        s.printStack1();

        s.push2(30);
        s.push2(50);
        s.push2(40);

        s.printStack2();


        return 0;
    }