import java.util.*;
public class search_in_inf_array{
    //the element is in an infinite sorted array find its index otherwise return -1;
    public static int infIndex(int nums[],int element){
        if(nums[0] == element) return 0;
        int i = 1;
        while(nums[i] < element){
            i=i*2;
            if(nums[i] == element)
                return i;
        }
        System.out.println(i);
        return binarySearch(nums,element,i/2 + 1,i-1);
    }   
    private static int binarySearch(int[] nums, int element, int i, int j) {
        
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid] == element) return mid;
            else if(nums[mid]>element) j=mid-1;
            else i=mid+1;
        }

        return 0;
    }
    public static void main(String[] args) {
        int nums[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        int element = 10;
        int index = infIndex(nums, element);
        System.out.println(index);
    }
}