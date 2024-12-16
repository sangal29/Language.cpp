// Program-4 : This program is to find the Min_of_two_number using the function 

#include<iostream>
using namespace std;

int Min_of_two_number(int a ,int b)
{
  if(a > b)
  {
    return b;
  }
  else{
     return a;
  }
}
int main()
{
    int number_1;
    cout<<"Enter the number 1 = ";
    cin>> number_1;

    int number_2;
    cout<< " Enter the number 2 = ";
    cin>> number_2;

    // function call 

    int Min = Min_of_two_number(number_1 , number_2);
    cout<< " The min number is = " <<  Min << endl;
    return 0;
}


// output of the code is :  5