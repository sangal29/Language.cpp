// Program : 1  This program tell us how we find to decimal to  binary 

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << " Enter the number = ";
    cin>> number;

    int ans  = 0;
    int product = 1;

    while( number > 0)
    {
        int rem = number % 2;   // to get remender
        number /= 2;   // to get quesent 
        ans  += ( rem * product);
        product *= 10; 
      

    }
    cout << ans;
    return 0;
}