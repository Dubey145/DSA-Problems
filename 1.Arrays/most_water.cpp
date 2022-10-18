//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int max_area = 0;
        while(start < end)
        {
            //ut<<start<<" "<<end<<" "<<nums[start]<<" "<<nums[end]<<" ";
            int area = min(nums[start], nums[end]) *(end-start);
            max_area = max(area,max_area);
            //ut<<max_area<<" "<<area<<endl;
            if(nums[start]<nums[end])
            {
                start++;
            }
            else if(nums[start]>nums[end])
            {
                end--;
            }
            else 
            {
                start++;
                end--;
            }
        }
        // 2,6 - 2*6 =12
        // 3,6 - 3*5 = 15
        // 4,6 - 4 *4 = 16
        // 5,6 = 5 *3 = 15
        // 18,6 - 6*2 = 12
        // 18,17 - 17*1 = 17
        int area = min(nums[start], nums[end]) *(end-start);
        max_area = max(area,max_area);
        return max_area;
    }
};
