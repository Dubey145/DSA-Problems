// problem link : hash map in cpp
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

//copy function signature

int main()
    {
        //used to store key value pairs 
        //map is based on red black tree and unordered map is based on hashing 
        //map stores keys in ordered form but unordered map has no order 
        //map has search insert and delete at O(log n) but with unordered map it is O(1) on an average

        unordered_map<string,int> hesmep;
        hesmep["sksk"] = 20; // the square bracket operator is mainly a member access operator
        hesmep["seventy"] = 70; // if the key is present it gives the reference of the value corresponding to that key, if it is not present then it inserts that key and returns the reference for that key.
        hesmep["kk"] = 22;
    
        //to insert a key value pair;
        hesmep.insert({"work",44});

        for(auto x : hesmep)
            {
                cout<<x.first<<" "<<x.second<<endl; // first is the key and second is the value
                //it can be of any order
            }
        
        //.end is an iterator that points to an element after the last element, it does not point to any valid element 
        cout<<endl;
        if(hesmep.find("sksk") != hesmep.end())
            {
                auto it = hesmep.find("sksk");
                cout<<it->second<<endl;
                cout<<hesmep.find("sksk")->second<<endl;
                //because we know that the key is present we can use the member access operator 
                //but if it is not present then that key will be inserted
                cout<<hesmep["sksk"]<<endl;
                //we can also use "at", it will throw out of range exception if the key is not present
                cout<<hesmep.at("sksk")<<endl;
            }
        cout<<endl;
        //iterating over an unordered map 
        for(auto it = hesmep.begin(); it!= hesmep.end();it++)
            {
                cout<<it->first<<" "<<it->second<<endl;
            }

        //count function return 0 or 1 - it can be used to substitute find function
        // size function give the number of key value pairs 
        // erase is used to remove a key value pair 
        

        return 0;
    }