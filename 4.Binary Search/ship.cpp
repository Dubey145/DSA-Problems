class Solution {
public:
    bool possible(vector<int>& weights, int capacity, int target)
    {
        int currentDays = 1;
        int currentLoad = 0;
        for(int num : weights)
            {
                if(currentLoad + num <= capacity){
                    currentLoad += num;
                }
                else
                {
                    currentDays += 1;
                    currentLoad = num;
                }
            }
        if(currentDays <= target) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight = 0;
        int sum = 0;
        for(int num : weights){
            maxWeight = max(maxWeight, num);
            sum += num;
        }
        int start = maxWeight;
        int end = sum;
        int mid;
        int res = end;
        while(start <= end)
        {
            mid = start +((end-start)/2);
            if(possible(weights,mid,days))
            {
                res = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }

        }
        return res;
    }
};
