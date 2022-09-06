import java.util.*;

public class spiral_print{
    public static void spiral(int [][] nums){
        int top = 0 ;
        int right = nums[0].length-1;
        int left = 0;
        int bottom = nums.length-1;

        while(top<=bottom && left<=right){

            for(int i = left ; i <= right; i++){
                System.out.print(nums[top][i] + " ");
            }
            top++;
            for(int i = top ; i <= bottom ; i++){
                System.out.print(nums[i][right] + " ");
            }
            right--;
            if(top<=bottom)
            for(int i = right; i >= left; i--){
                System.out.print(nums[bottom][i] + " ");
            }
            bottom--;
            if(left<=right)
            for(int i = bottom ; i >=top ; i--){
                System.out.print(nums[i][left] + " ");
            }
            left++;

        }
    }
    public static void main(String [] args){
        int [][] nums = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        int [][] nums2 = {{1,2,3},{4,5,6},{7,8,9}};
        int [][] nums3 = {{1,2,3}};
        int [][] nums4 = {{1},{2},{3}};
         spiral(nums4);
    }
}