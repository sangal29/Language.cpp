// Program 1 : This programm is a brute force approch of the  single elemnt qutuion

#include<iostream>
#include<vector>
using namespace std;
// function declar

int element( vector<int>nums , int size)
{
     for ( int i = 0; i < size; i++)
     {
        if ( nums[i] != nums[i+1] && nums[i] !=nums[ i - 1])
        {
          return nums[i];
        }
     }
}
int main()
{
   // vector declarition 

   vector<int>vec = { 3,3,7,7,9,10,10,11,11};
   int size = vec.size();

   // function call
   int result = element( vec , size);
   cout <<" The  single element  of the array = "<< result;
   
   return 0;
}