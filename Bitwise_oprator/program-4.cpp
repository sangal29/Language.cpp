// Program-4 : This program is convert the binary to decimal using function 

#include<iostream>
using namespace std;
// Function declaration 
int binary_to_decimal(int num)
{
    int sum = 0;
    int product = 1;
    while(num > 0 )
    {
      int rem = num % 10;
      sum += ( rem * product);
      num /= 10;
      product *=2;

    }
    return sum;

}
int main()
{

int number;
cout <<" Enter the number = ";
cin>> number;

int ans =binary_to_decimal(number);
cout << " The decimal number is = "<< ans<<endl;
return 0;

}