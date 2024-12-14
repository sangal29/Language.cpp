//Program-5 : This program is to find the sum of one to n number using the function 


#include<iostream>
using namespace std;

// Function declaration 

int sum_of_n(int n)
{
    int sum = 0;
    for( int i = 1; i<= n; i++)
    {
        sum  += i;
      
    }
    return sum;
}
int main()
{
    int number;
    cout<<" Enter the number = ";
    cin >> number;
    
    // function call 
    int sum = sum_of_n(number);
    cout << sum;
    return 0;

}

