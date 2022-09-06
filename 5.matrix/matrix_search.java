import java.util.*;
public class matrix_search {
    public static void search(int[][] nums,int target){
        if(target<nums[0][0] || target > nums[nums.length-1][nums[nums.length-1].length-1]){
            System.out.println("element in not present in the matrix");
            return;
        }
        //beginning from top left corner 

        int j = 0 ; // will give the search column    
        while(j < nums[0].length && target>=nums[0][j]){
            j++;
        }
        j=j-1;
        System.out.println(j);
        int i = 0;
        while(i < nums.length && target>=nums[i][j]){
            i++;
        }
        i=i-1;
        System.out.println(i);
        if(nums[i][j] == target){
            System.out.println("element found at index : "+i+" "+j);
            return;
        }
        //if the element is not at ij search on the left side of the search column in the search row;
        for(int k = 0 ; k < nums[i].length;k++){
            if(target == nums[i][k]){
            System.out.println("element found at index : "+i+" "+k);
            return;
            }
        }
        System.out.println("element in not present in the matrix");
    }
    //similar approach starting from the top right corner
    public static boolean search2(int[][] nums, int target){
        int i = 0, j = nums[0].length-1;
        while(i<nums.length && j >= 0){
            if(nums[i][j] == target){
                return true;
            }
            else if(nums[i][j] > target){
                j--;
            }
            else 
                i++;
        }
        return false;
    }
    public static void main(String[] args) {
        int[][] nums = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
        int[][] nums2 = {{1},{2}};
        int [][] nums3 ={{1,3,5,7},{10,11,16,20},{23,30,34,50}};

        System.out.println();
        search(nums,10);
    }
}
