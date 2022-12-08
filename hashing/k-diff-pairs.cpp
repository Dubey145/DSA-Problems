//https://leetcode.com/problems/k-diff-pairs-in-an-array


unordered_map<int,int> elements;
        for(int number : nums) elements[number]++;     
        
        int count = 0;

        for(auto it : elements)
            {
                if(k == 0)
                    {
                        if(it.second>1) count++;
                    }
                else
                    {
                        if(elements.find(it.first + k) != elements.end())
                            {
                                count++;
                            }
                    }
            }
        return count;
