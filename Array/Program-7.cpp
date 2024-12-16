// Progarm-7: This program is the sum and the product of the array 

#include<iostream>
using namespace std;
pair<int ,int> sum_product( int array[] , int size)
{
    int sum = 0;
    int product = 1;

    for(int i = 0; i<= size; i++)
    {
        sum += array[i];
        product *= array[i];

    }
    return {sum , product };
}

int main()
{
    int Array[] = { 2,3,4,56,7,54};
    int size = sizeof(Array)/sizeof(Array[0]) - 1;
    
    pair<int ,int>result = sum_product(Array,size);
 
    cout <<" Sum of the array = "<< result.first << endl;
    cout<<" Product of the array = "<< result.second;
    return 0;
}


// Note : when we want return two value at a same time in the function we simply 
// use pair function in which we use pair< datatype, data type>  
//  and get pair<> function name   function.first
// for three use tuple and also include<tuple>
//  to return value use get<1>