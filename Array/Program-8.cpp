// Program-8 : This program is about to reverse the array and its sum and product

#include<iostream>
#include<utility>
using namespace std;
// function of the reverse of array 
void reverse(int array[] , int size)
{
    int start = 0;
    int end = size;
    while( start <= end)
    {
    swap(array[start] , array[end]);
    start++;
    end--;
    }

}

// function of the sum and the product of the array 

pair<int, int>sum_product(int array[] , int size)
{
    int sum = 0;
    int product = 1;
    for(int i = 0; i <= size; i++)
    {
        sum += array[i];
        product *= array[i];

    }
    return { sum , product};

}

int main()
{
    int Array[] = { 1,2,3,4,5,6,8};
    int size = sizeof(Array)/sizeof(Array[0]) - 1;
   
    // return of the revrse of the array

    reverse(Array,size);
    cout<< " The reverse of the array = ";
    for(int i = 0; i <= size; i++)
    {
        cout<< Array[i];
        if(i < size)
        {
            cout<< " , ";
        }

    }  

    cout << endl;

    // sum and the product of the array 

    pair<int ,int>result = sum_product(Array, size);

  cout<< " The product of the revrse of array = " << result.second << endl;
  cout<< " The sum of the revrse of the array = " << result.first;
    return 0;
}