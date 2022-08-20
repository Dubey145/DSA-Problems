// problem link : https://leetcode.com/problems/design-hashmap/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class MyHashMap {
    private:
        vector<int> keys;
        vector<int> values;
        int index;
    public: 
        MyHashMap() {
            
        }
        
        void put(int key, int value) {
            if(!contains(key))
                {
                    keys.push_back(key);
                    values.push_back(value);
                }
            else 
                {
                    values[index] = value;
                }
        }
        
        int get(int key) {
            if(contains(key))
                return values[index];
            else 
                return -1;
        }
        
        void remove(int key) {
            for(int i = 0 ; i<keys.size();i++)
                {
                    if(keys[i] == key)
                        {
                            index = i;
                            keys.erase(keys.begin()+index);
                            values.erase(values.begin()+index);
                            return;
                        }
                }
        }
        bool contains(int key)
            {
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
int main()
    {
        MyHashMap * hash = new MyHashMap();
        hash->put(1,1);
        hash->put(2,2);

        cout<<hash->get(1)<<endl;
        cout<<hash->get(3);

        hash->put(2,1);

        cout<<hash->get(2)<<endl;
        
        hash->remove(2);

        cout<<hash->get(2)<<endl;

        return 0;
    }