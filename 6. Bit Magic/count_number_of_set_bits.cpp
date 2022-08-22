#include<iostream>
using namespace std;

int count_set_bits(int number)
    {
        int count = 0 ;   
        while(number!=0)
            {
                if((number & 1) != 0) // or number%2! = 0 even number do not have their lsb as 1
                    {
                        count++;  
                    }
                number = number>>1; // or number/2
            }
        return count;
        /*
            The time complexity of this approach is 
            O(number_of_bits)

            suppose we use n bits to store the number and if the MSB is set then this approach will take O(n)
        */
    }
//braian kerningams algorithm 
//when you subtract 1 from a number the bits after the last set bits are changed to 1
//for every iteration lets turn of one of the set bits

int better_check(int number)
    {
        int count = 0 ;
        while(number!=0)
            {
                number = number & (number-1);
                count++;  
            }
        return count;
        /*
            The time complexity of this better approach is theta(number_of_set_bits)
        */
    }

int main()
    {
        int number = 16;
        
        cout<<"number of set bits are "<<better_check(number)<<endl;
        return 0;
    }