import java.util.*;
public class peak_mountain {
    public static int peak(int nums[]){
        int start = 0;
        int end = nums.length;

        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int nums[] = {99,100,99};
        System.out.println(peak(nums));
    }
}
