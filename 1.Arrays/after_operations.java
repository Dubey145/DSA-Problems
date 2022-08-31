import java.util.*;
class after_operations{

    public int finalValueAfterOperations(String[] operations) {
        int x = 0;
        for(int i = 0 ; i <operations.length;i++){
            if(operations[i] == "X++" || operations[i] = "++X")
                x++;
            else 
                x--;
        }
        return x;
    }
    public static void main(String[] args) throws Exception{

    }
}