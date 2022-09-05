import java.util.*;
public class rotate_90 {
    //using extra space
    public static int[][] deg(int [][] nums){
        int temp[][] = new int [nums.length][nums.length];

        for(int i = 0; i < nums.length; i++){
            for(int j = 0 ; j < nums.length; j++){
                temp[j][i] = nums[i][nums.length-j-1];
            }
        }
        return temp;
    }

    public static int[][] better_deg(int[][] nums){
        //transpose the 2d array first 
        for(int i = 0 ; i < nums.length;i++){
            for(int j = i + 1; j < nums.length;j++){
                int temp = nums[i][j];
                nums[i][j] = nums[j][i];
                nums[j][i] = temp;
            }
        }

        //now swap the rows 
        for(int i = 0 ; i < nums.length/2; i++){
            for(int j = 0 ; j < nums.length ; j++){
                int temp = nums[i][j];
                nums[i][j] = nums[nums.length-i-1][j];
                nums[nums.length-i-1][j] =  temp;            
            }
        } 

        return nums;

    }
    public static void main(String[] args) {
        int nums[][] = {{1,2,3,4,17},{5,6,7,8,18},{9,10,11,12,19},{13,14,15,16,20}};
        nums = better_deg(nums);
        for(int i = 0; i < nums.length; i++){
            for(int j = 0 ; j < nums.length; j++){
                System.out.print(nums[i][j] + " ");
            }
            System.out.println();
        }
    }
}
