// Program-3 This Program is to find the largest and the smalllest of the array.

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int Array[] = {22,2345,234,11,-456,45678,4};
    int size = sizeof(Array)/sizeof(Array[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;

    
    for(int i = 0; i < size; i++)
    {
        
    //  if( Array[i] < smallest)
    //  {
    //         smallest = Array[i];
    //            
    //     }

          smallest = min(Array[i],smallest);
           largest = max(Array[i],largest);
     }
     cout<< " The smallest number is = " << smallest << endl;
     cout<<" The largest number is = " << largest;
    return 0;
}