class SmallestInfiniteSet {
public:
    set<int> numbers;
    SmallestInfiniteSet() 
    {
        for(int i = 1; i <=1000; i++ )
        {
            numbers.insert(i);
        }
        
    }
    
    int popSmallest() 
    {
        int last = *numbers.begin();
        numbers.erase(numbers.begin());
        return last;
    }
    
    void addBack(int num) 
    {
        numbers.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
