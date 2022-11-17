//median of 2 sorted arrays 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto it : nums2)
        {
            nums1.push_back(it);
        }
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2!=0) return double(nums1[nums1.size()/2]);
        else 
        {
            double median = (nums1[nums1.size()/2]+nums1[(nums1.size()/2)-1])/2.0;
            return median;
        }
        return 0;
    }
};
