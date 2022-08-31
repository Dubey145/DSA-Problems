import java.util.*;

public class monotonic_array {
    public boolean monotonic(int nums[]){
        int less_than = 0;
        int greater_than = 0;

        for(int i = 0; i < nums.length -1; i++){
            if(nums[i]<nums[i+1]) less_than++;
            else if(nums[i]>nums[i+1]) greater_than++;
            //do nothing if numbers are equal
        }
        
        if(less_than == 0 || greater_than == 0)
            return true;

        return false;
    }
    public static void main(String[] args) throws Exception{
        int nums[] = {1,2,3,4,5};
        monotonic_array obj = new monotonic_array();
        System.out.println(obj.monotonic(nums));
    }
    
}
