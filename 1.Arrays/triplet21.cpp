//https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
        int count = 0;
        sort(arr,arr+n);
        for(int i = n-1; i>=0; i--)
            {
                int start = 0;
                int end = i-1;
                while(start<end)
                    {
                        int sum = arr[start]+arr[end];
                        if(sum == arr[i]) count++;
                        if(sum<arr[i])start++;
                        else end--;
                    }
            }
        return count;
	}
};
