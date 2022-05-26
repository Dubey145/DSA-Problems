#include <iostream>
#include <cstring>
using namespace std;

/*

 Reverse the given string word wise. 
That is, the last word in given string should come at 
1st place, last second word at 2nd place and so on. 
Individual words should remain as it is.

*/

int main() 
    {
        char input[100];
        char output[100];
        cout<<"enter sentence : ";
        cin.getline(input, 100);
        int length = strlen(input);
        int out_index = 0;
        int end = length;
        for(int i = length-1;i>=0;i--)
            {
                if(input[i]==' ')
                    {
                        for(int j = i+1;j<end;j++)
                            {
                                output[out_index] = input[j];
                                out_index++;
                            }
                        end = i;
                        output[out_index] = input[i];
                        out_index++;
                    }
                else if (i == 0)
                    {
                         for(int j = i;j<end;j++)
                            {
                                output[out_index] = input[j];
                                out_index++;
                            }
                    }
            }
        cout<<output;
        return 0;
    }