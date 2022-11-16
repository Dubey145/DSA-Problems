//https://leetcode.com/problems/first-bad-version/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 0;
        int end = n;
        int mid;
        int firstBad = 0;
        
        while(start<=end)
        {
            mid = start+((end-start)/2);
            if(isBadVersion(mid))
            {
                firstBad = mid;
                end = mid-1;
            }
            else //if(isBadVersion == false)
            {
                start = mid+1;
            }
        }
        return firstBad;
    }
};
