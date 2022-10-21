//https://leetcode.com/problems/reduce-array-size-to-the-half/

class Solution {
public:
    int minSetSize(vector<int>& nums) 
    {
        //at least half has to be removed 
        unordered_map<int,int> map;
        for(auto number : nums)
        {
            map[number]++;
        }
        if(map.size() == 1) return 1;
        vector<vector<int>> matrix;
        for(auto it : map)  
        {
            matrix.push_back({it.second,it.first});
        }
        sort(matrix.begin(),matrix.end());
        int counter = matrix.size();
        int deleted_size = 0;
        int size = nums.size()/2;
        
        while(deleted_size<size)
        {
            deleted_size += matrix[counter-1][0];
            counter--;
        }
        cout<<counter;
        cout<<endl<<matrix.size()-counter;
        return matrix.size()-counter;
    }
};
