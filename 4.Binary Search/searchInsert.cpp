class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int start = 0;
        int end = nums.size()-1;
        int mid ;
        int index = 0;
        
        while(start<=end)
        {
            mid = start + (end-start)/2;
            index = mid;
            cout<<index<<endl;
            if(nums[mid] == target)
            {
                return index;
            }
            else if(nums[mid]<target)
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        if (nums[mid]>target)
        {
            return mid;
        }
        else 
            return mid+1;
    }
};
