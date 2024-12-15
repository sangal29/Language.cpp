// Program-9 : This program is to find the 1 to  n Number prime number using function 

#include<iostream>
using namespace std;

// Function 

bool is_prime(int n){

    if( n <= 1)
    {
        return false;

    }
   for (int i = 2 ; i < n; i++)
 {
      if( n % i == 0)
       {
        return false;
       }
 }
 return true;
}


 void prime(int num)
{
   for( int i = 1 ; i <= num ; i++)
   {
    if(is_prime(i)){
      cout<< i <<" ";
    }
   }

}

int main()
{

   int number;
   cout<<" Enter the number = ";
   cin>> number;

//function call
  prime(number);



    return 0;
}