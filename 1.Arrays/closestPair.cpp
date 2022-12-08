//https://practice.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays4215/1

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        vector<int> pair;
        int i = 0;
        int j = m-1;
        int minDiff = INT_MAX;
        while(i<n && j>=0)
            {
                int sum = arr[i]+brr[j];
                int diff = abs(sum-x);
                if(diff<minDiff)
                    {
                        minDiff = diff;
                        pair = {arr[i],brr[j]};
                    }
                if(sum>x)
                    j--;
                else
                    i++;
            }
        //cout<<pair[0]<<" "<<pair[1]<<endl;
        return pair;
    }
};
