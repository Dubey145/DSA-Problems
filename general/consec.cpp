//consec
//https://leetcode.com/contest/biweekly-contest-95/problems/find-consecutive-integers-from-a-data-stream/

class DataStream {
public:
    int limit;
    int start = 0;
    int value_;
    long long correctCount = 0;
    DataStream(int value, int k) {
        limit = k;
        value_ = value;
    }
    
    bool consec(int num) 
    {
        if(num != value_) {correctCount = 0; return false;}
        
        if(num == value_) 
        {
            correctCount++; 
            if(correctCount >= limit) 
                return true;
            return false;
        }
        
        
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
