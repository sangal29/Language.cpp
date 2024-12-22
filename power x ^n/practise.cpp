//  This is the practise only 

#include<iostream>
using namespace std;
int binary_exp( int x , int n)
{
    int binary_form = n;

   
    int ans = 1;  //  remeber what given in the qution double or any thing other
    
     while (binary_form > 0)
     {
        if( binary_form  % 2 == 1)
        {
            ans *=x;
        }
         x *= x;
         binary_form /= 2;

     }
     return ans;
}
int main()
{
      int   number = 3;
      int  power = 5;

    int  result = binary_exp( number , power);
    cout << result;
    return 0;
}