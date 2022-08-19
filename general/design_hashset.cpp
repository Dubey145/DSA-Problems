// problem link : https://leetcode.com/problems/design-hashset/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class MyHashSet {
    vector<int> keys;
    vector<int> values;
    int index;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key))
            keys.push_back(key);
    }
    
    void remove(int key) {
        if(contains(key))
            {
                keys.erase(keys.begin()+index);
            }
    }
    
    bool contains(int key) {
        for(int i = 0 ; i<keys.size();i++)
            {
                if(keys[i] == key)
                    {
                        index = i;
                        return true;
                    }
            }
        return false;
    }
    
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

int main()
    {
        vector<int> nums{};
        MyHashSet * obj = new MyHashSet();


        return 0;
    }