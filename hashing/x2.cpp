class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(true)
        {
            int prev = original;
            for(int number : nums)
            {
                if(number == original)
                        original *=2;
            }
            if(prev == original)
                return original;
        }
    }
};
