//https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
#include<iostream>
using namespace std;

bool isRotation(string s1,string s2)
    {
        
        char find = s1[0];
        int key = 0 ;
        for(int i = 0 ; i <s1.length();i++)
            {
                if(s2[i] == s1[0])
                    {
                        key = i;
                        break;
                    } 
            }        
        for( int i = 1; i <s1.length();i++)
            {
                if(s1[i]!=s2[(i+key)%s1.length()])
                    {
                        return false;
                    }
            }
        return true;

    }

int main()
    {
        string s1 = "ABACD";
        string s2 = "CDABAasasaasdf";
        cout<<isRotation(s1,s2);
        return 0;
    }
