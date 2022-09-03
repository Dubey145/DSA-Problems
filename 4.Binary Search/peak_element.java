import java.util.*;
public class peak_element{
    
    public static int peak_element(int[] nums){
        if(nums[0]>=nums[1]) return nums[0];
        if(nums[nums.length-1]>=nums[nums.length-2]) return nums[nums.length-1];

        for(int i = 1; i < nums.length; i++ ){
            if(nums[i]>=nums[i-1] && nums[i]>=nums[i+1]) return nums[i];
        }
        return -1;
    }
    public static int optimized_peak(int [] nums){
        //gfg works only when array has no duplicates xxxx
        int start = 0;
        int end = nums.length-1;
        if(nums.length == 1){
            return 0;
        }
        if(nums.length == 2){
            return nums[0]>nums[1]?0:1;
        }
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if((mid == 0 || nums[mid]> nums[mid+1]) && (mid == nums.length-1 || nums[mid]>nums[mid-1])){
                return mid;
            }
            else if(nums[mid]<nums[mid-1]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }
    public static int get_peak(int[] nums){
        int start = 0;
        int end = nums.length-1;

        while(start<end){

            int mid = start + (end-start)/2;
            
            if(nums[mid]<nums[mid+1]){
                start = mid+1;
            }
            else 
                end = mid; // don't do mid-1 as mid might be the peak element
        }
        return start;
        //start will point to the peak element
    }
    public static void main(String[] args) {
        int nums[] = {1};
        System.out.println(get_peak(nums));
    }
}