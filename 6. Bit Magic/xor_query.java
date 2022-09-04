import java.util.*;
public class xor_query {
    public int[] xorQueries(int[] arr, int[][] queries) {
        int result[] = new int [queries.length];

        for(int i = 0 ; i < queries.length;i++){
                int start = queries[i][0];
                int end = queries[i][1];
                int xor = 0;
                for(int j = start;j<=end;j++){
                    xor ^= arr[j];
                }
                result[i] = xor;
            }

        return result;
    }
    public int[] better_xor(int arr[],int [][] queries){
        int [] result = new int [queries.length];
        int prefixXor[] = new int [arr.length];
        prefixXor[0] = arr[0];

        for(int i = 1 ; i < arr.length; i++){
            prefixXor[i] = prefixXor[i-1]^arr[i];
        }

        for(int i = 0; i < queries.length;i++){
            int left = queries[i][0];
            int right = queries[i][1];

            if(left == 0) result[i] = prefixXor[right];
            
            else result[i] = prefixXor[right] ^ prefixXor[left-1];
        }
        return result;
    }
    public static void main(String[] args) {
        
    }
}
