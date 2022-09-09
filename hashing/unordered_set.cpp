// problem link : unordered 
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

//copy function signature

int main()
    {
        unordered_set<int> u_set;
        u_set.insert(10);
        u_set.insert(20);
        u_set.insert(30);

        for(int x : u_set)
            cout<<x<<" "; // does not maintain order of the elements
        
        cout<<endl;

        for(auto iterator = u_set.begin(); iterator != u_set.end();iterator++)
            {
                cout<<*iterator<<" ";
            }

        cout<<endl;
        cout<<u_set.size();
        //find function, if the element is present an iterator to it is returned otherwise u_set.end() is returned 

        if(u_set.find(20) == u_set.end())
            {
                cout<<"not found";
            }
        else 
            {
                cout<<"element found";
            }

        //finding can also be done using count function
            //.count(key) will either return 0 or 1 because there cannot be duplicate keys in an unordered set
        if(u_set.count(20))
            {
                cout<<"element found ";
            }
        else 
            {
                cout<<"element not found";
            }
        
        //erase will remove an item
        u_set.erase(20);
        //we can also remove a set of items 
        u_set.erase(u_set.begin(), u_set.end());
        u_set.clear(); // deletes everything 

        return 0;
    }