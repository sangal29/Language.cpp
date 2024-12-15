// Program-3 : This is a program of sum of two number using retunn type function

#include<iostream>
using namespace std;
int sum(int a , int b)
{
     int s = a + b;
     return s;
}
int main()
{
  int num1;
  cout<<"Enter the 1 num = ";
  cin>> num1; 

  int num2;
  cout<< " Enter the 2 num = ";
  cin>> num2;

  int addition = sum( num1 , num2);
  cout<< addition;
  return 0;   
}

// Output of the code is :  9 