#include<iostream>
#include<cstring>
using namespace std;

//given a string we have to reverse the string

//method 2 
void reverse(char input[])
    {
        int len = strlen(input);
        int i = 0,j = len-1;
        while(i<j)
            {
                char temp = input[i];
                input[i] = input[j];
                input[j] = temp;
                i++;j--;
            }
        cout<<input;
    }

int main()
    {
        char str[100];
        cout<<"enter a string :";
        cin>>str;
        int length = strlen(str);
        for(int i=0; i< (length/2) ; i++)
            {
                char temp = str[i];
                str[i] = str[length-i-1];
                str[length-i-1] = temp;
            }
        cout<<str<<endl; 

        //method 2 
        reverse(str);     
        return 0;
    }