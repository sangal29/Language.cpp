// Program-2 : To write a program ehich convert the binary to decimal 

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout <<" Enter the number = ";
    cin>> number;

    int ans = 0;
    int product = 1;
    while( number > 0 )
    {
        int rem = number % 10;
         ans += rem* product;
        number /= 10;
        product  *= 2;

    }
    cout<< ans;
    return 0;
}