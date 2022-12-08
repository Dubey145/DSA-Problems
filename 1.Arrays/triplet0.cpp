//https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr,arr+n);
        
        for(int i = 0; i <n; i++)
            {
                int j = i+1;
                int end = n-1;
                while(j<end)
                    {
                        int sum = arr[i]+arr[j]+arr[end];
                        if(sum == 0) return true;                            
                        if(sum>0) end--;
                        else j++;
                    }
            }
        return false;
    }
};
