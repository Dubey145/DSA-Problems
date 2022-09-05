import java.util.*;
public class snake_pattern{
    public static void main(String[] args) throws Exception{
        int array[][] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        int i = 0;
        while(i < array.length){
            if(i%2 == 0){
                for(int j = 0; j < array[i].length; j++){
                    System.out.print(array[i][j]+" ");
                }
            }
            else{
                for(int j = array[i].length -1; j>=0; j--){
                    System.out.print(array[i][j]+" ");
                }
            }
            System.out.println();
            i++;
        }
    }
}
