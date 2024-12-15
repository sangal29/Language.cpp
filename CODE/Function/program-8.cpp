// Program-8 : This program is to find the binomial cofficent of the number using function 

#include<iostream>
using namespace std;

//  To find the factorial 

int fact(int n)
{    
    int product = 1;
    for( int i = 1; i <= n; i ++)
    {
         product*=i;

    }
    return product;
    //
}  
//   To find the binomial cofficent 
//  also add acondion in which if r is gretar than the n is return -1 
int bino_coffic(int n ,  int r)
{
    if ( r> n)
    {
        return -1;
    }
    int A = fact(n);
    int B = fact(r);
    int C = fact(n-r);

    return A /( B * C);
}
int main()
{ 
int N , R;
cout << " Enter the N = ";
cin>> N;


cout<< " Enter the R = ";
cin>> R;


//  function call 

int result = bino_coffic( N ,  R);

//  out put of the code 

if(result == -1)
{
    cout <<" The R is greater than the N so it is invalid";
}
else{
cout << " The ans of NCR is = "  << result;
}
return 0;
}