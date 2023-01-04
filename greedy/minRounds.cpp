//https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/submissions/870913129/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        unordered_map<int,int> map;

        for(int diff : tasks)
            map[diff]++;

        int rounds = 0;

        for(auto it : map)    
            {
                if(it.second == 1) return -1;

                int count = 0;
                while(it.second>3)
                    {
                        it.second-=3;
                        count++;
                    }
                if(it.second>0)
                    {
                        count++;
                    }
                rounds+=count;
            }
        return rounds;
    }
};
