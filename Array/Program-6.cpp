// Program-6 :  This program is a reverse of the array using swape function
#include<iostream>
using namespace std;
void reverse(int array[] , int size)
{
    int start = 0;
    int end = size;
    while( start <= end)
    {
    swap( array[start] , array[end]);
    start++;
    end--;
    }
}
int main()
{
    int Array[] = { 2,3,4,5,6,8,9};
    int size = sizeof(Array)/sizeof(Array[0]) - 1;

    reverse(Array, size);

    for(int i = 0; i<= size; i++)
    {
        cout<< Array[i] << " ";
    }
    cout<<endl;
    
    return 0;
}