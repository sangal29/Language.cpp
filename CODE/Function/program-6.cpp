// Program-6 : This program is to find the factorial of the number using function

#include<iostream>
using namespace std;
int factorial(int n)
// insitialization of the fumnction 
{
    int fact = 1;
    for(int i = 1; i<= n; i++)
    {
       fact *=i;
    }
    return fact;

}
int main()
{
    //  asking the  number 
    int number;
    cout<<" Enter the Number = ";
    cin>> number;

    // function call 
    int ans = factorial( number);

   // output of the code 
    cout<<" The factorial of "<< number << "="<< ans << endl;

    return 0;
}