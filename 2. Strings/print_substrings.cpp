#include<iostream>
#include<cstring>
using namespace std;

/* 
to print all substrings of a given string 

*/

void substring(char str[], int size)
{
    // Pick starting point
    for (int start = 1; start <= size; start++)
    {   
        // Pick ending point
        for (int end = 0; end <= size - start; end++)
        {
            // Print characters from current
            // starting point to current ending
            // point. 
            int print_length = end + start - 1;           
            for (int start_length = end; start_length <= print_length; start_length++)
                cout << str[start_length];
             
            cout << endl;
        }
    }
}

//using substr function
void substring2(string str, int size)
    {
        // Pick starting point in outer loop
        for(int i =0;i<size;i++)
            {
                //then select lengths of different strings for starting points
                for(int point = 1; point<= size-1;point++)
                    {
                        cout<<str.substr(i,point)<<endl; 
                    }
            }
    }
int main()
    {
        char input[100];
        cin>>input;
        int len = strlen(input);

        substring(input,len);

        cout<<endl;

        string s;
        cin>>s;
        substring2(s,s.length());
        
        return 0;
    }