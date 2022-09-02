import java.util.*;

public class set_mismatch {
    public int[] findErrorNums(int[] nums) {
        int result[] = new int[2];
        for(int i = 0 ; i < nums.length; i++){
            if(nums[i] != i+1){
                result[0] = nums[i];
                result[1] = i+1;
                break;
            }
        }
        return result;
    }
    public static void main(String[] args){

    }
}
