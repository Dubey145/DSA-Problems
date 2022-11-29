//https://leetcode.com/problems/insert-delete-getrandom-o1/

class RandomizedSet {
public:
    unordered_map<int,int> map;
    vector<int> elements;
    
    RandomizedSet() 
    {    
        
    }
    
    bool insert(int val) 
    {
        if(map.count(val))
            return false;
        
        elements.push_back(val);
        int index = elements.size()-1;
        map[val] = index;
        return true;
    }
    
    bool remove(int val) 
    {
        if(!map.count(val))
            return false;
        
        int index = map[val];
        elements[index] = elements.back();
        map[elements.back()] = index;
        map.erase(val);
        elements.pop_back();
        
        return true;
    }
    
    int getRandom() 
    {
        int randomIndex = rand()%elements.size();
        return elements[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
