#include<iostream>
using namespace std;
int binary[32];
void decimal(int n)
    {
        int index = 0;
        while (n>0)
            {
                binary[index++]=(n % 2);
                n/=2;
            }
        for(int i = index-1; i >=0 ; i--)
            {
                cout<<binary[i];
            }
    }

int main()
    {  
        int n;
        cin>>n;
        decimal(n);
        return 0;
    }
