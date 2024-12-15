// program-7 : This program i sto find the sum of digit using the function 


#include <iostream>
using namespace std;
int sum_of_digit(int n)
{
      int sum = 0;
    while (n > 0)
    {
      
        int digit = n % 10;
        sum += digit;
        n = n / 10;
        
    }
    return sum;
}
int main()
{
    int number;
    cout << " Enter the number ";
    cin >> number;

    int digit_sum = sum_of_digit(number);
    cout << digit_sum;

    return 0;
}

// Note : when we try to find the sum of digit we remeber two things one is " Num % 10 " this give us remender that's mean we get the last digit of the number and second thing is " Num / 10 " this give us the quest of the digit that means we get remain digit of the number 

// exmple :   156 % 10 this give us 6 and 156 / 10 this give us 15 