//    https://leetcode.com/problems/roman-to-integer/
/*
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
 */
import java.util.*;

public class Roman{
    public static void main(String[] args) {
        String s ;
        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();
        int len = s.length();
        //the biggest value occurs first
        
        int previous_number = 1001;
        int number = 0;
        int result =0;

        for(int i = 0; i < len; i++) {
            char current = s.charAt(i);
            switch(current) {
                case 'I' :       number =     1 ; break;
                case 'V' :       number =     5 ; break;
                case 'X' :        number =    10 ; break;
                case 'L' :        number =    50 ; break;
                case 'C' :         number =   100 ; break;
                case 'D' :         number =   500 ; break;
                case 'M' :          number =  1000 ; break;
            }
            if(previous_number < number) {
                number = number-(2*previous_number);
            }
            previous_number = number;
            result+=number;
        }
        System.out.println(result);
    }
}
