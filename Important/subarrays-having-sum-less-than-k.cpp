//https://www.geeksforgeeks.org/number-subarrays-sum-less-k/

int subarrays(vector<int> nums, int k)
    {
        int result = 0;
        int start = 0,end = 0;
        int currentSum =nums[0];

        while(end<nums.size()) 
            {
                if(currentSum<k)
                    {
                        end++;
                        if(start<=end) result+=end-start;

                        if(end<nums.size()) currentSum+=nums[end];
                    }
                else
                    {
                        currentSum -= nums[start];
                        start++;
                    }
            }
        return result; 
    }
