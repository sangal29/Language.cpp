// Program-3 : This program is convert the decimal to binary using function 

#include<iostream>
using namespace std;
int decimal_to_binary(int num)
{
   int ans = 0;
   int pro = 1;
   while( num > 0)
   {
       int rem = num % 2;
       ans += rem * pro;
       num /= 2;
       pro *=10;
   } 
   return ans;
}
int main()
{
    int number;
    cout << " Enter the number = ";
    cin >> number;

    int result = decimal_to_binary(number);
    cout<< " The decimal to binary is = " << result;

return 0;
}