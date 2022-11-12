// 
class Solution {
public:
    int rev(int num)
    {
        string number = to_string(num);
        reverse(number.begin(),number.end());
        int reverse = stoi(number);
        return reverse;
    }
    int countDistinctIntegers(vector<int>& nums) 
    {
        int counter = 0;
        unordered_set<int>numbers;
        for(auto number : nums )
        {
            numbers.insert(number);
            numbers.insert(rev(number));
        }
        return numbers.size();
    }
};
