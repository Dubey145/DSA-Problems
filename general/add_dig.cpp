#include <iostream>
#include <cmath>
using namespace std;

int addDigitByDigit(int a,int b,int c){
  int array[4];
	int dig1,dig2,dig3;
  	int carry = 0,dig_sum = 0,i=0;
    int number=0;

  	while(dig1>0&&dig2>0&&dig3>0)
    { cout<< i;
      dig1 = a%10;
      dig2 = b%10;
      dig3 = c%10;
      
      dig_sum = dig1+dig2+dig3+carry;
      carry = dig_sum/10;
      array[i] = dig_sum%10;
      i++;
      
      a /= 10;
      b /= 10;
      c /= 10;
    }
  
  for(int k =0;k<i;k++)
  {
    number = number + array[k] + pow(10,k);
  }
  return number;
}

int main()
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<addDigitByDigit(a,b,c)<<endl;
        return 0;
    }