// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

//copy function signature

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


        return 0;
    }