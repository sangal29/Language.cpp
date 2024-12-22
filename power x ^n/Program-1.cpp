// Program-1: The  power of x ^n leetcode qution 

#include <iostream>
using namespace std;
int binary_coffecient(int x, int n)
{
    if ( x == 0) return 0;
    if( n == 0)  return 1;
    if( x == -1 && n % 2 == 0) return 1;
    if( x == 1  && n % 2 != 0 ) return -1;
     
    long binary_form = n;
    if( n < 0 )
    {
        binary_form = 1/x;
        binary_form = -binary_form;
    }
    
     double ans = 1;

    while (binary_form > 0)
    {
        
            if (binary_form % 2 == 1)
            {
                ans *= x;
            }

            x *= x;
            binary_form /= 2;
         
        
    }
    return ans;
}

int main()
{

    int number = 3;
    int power = 5;

    int result = binary_coffecient(number, power);
    cout << result;
    return 0;
}