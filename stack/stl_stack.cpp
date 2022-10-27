// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

/*
push
pop
size
empty
top
all stack operations work on O(1)
*/



int main()
    {
        stack<int> s;
        s.push(10);
        s.push(20);
        s.push(30);

        cout<<s.size()<<endl;
        cout<<s.top()<<endl;
        s.pop();
        cout<<s.top()<<endl;
        
        //printing all elements of the stack

        while(s.empty() == false) // or while(!s.empty())
            {
                cout<<s.top()<<" ";
                s.pop();
            }

        return 0;
    }
