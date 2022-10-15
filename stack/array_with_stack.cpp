//https://leetcode.com/problems/build-an-array-with-stack-operations
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
            
        int k = 0;
        for(int i = 0; i < n; i++)
        {
            if(k>target.size()-1)
                return result;
            
            if(target[k] == i+1)
            {
                result.push_back("Push");
                k++;
            }
            else 
            {
                result.push_back("Push");
                result.push_back("Pop");
            }
        }
        return result;
    }
};
