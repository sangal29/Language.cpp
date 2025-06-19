// Program - 1 : This program is search a target value  in the given array using binary search 

#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>nums , int size , int target)
{
     int st = 0;
     int end = size - 1;
     while( st <= end)
     {
    //  int mid = ( st + end)/2;

    int mid = st + ( end - st )/ 2;  // when we solve on platform it give error of max value 
     // for that we use this method  " overflow   "

      if( target < nums[mid])
      {
         end = mid -1;
      }
      else if( target > nums[mid] )
      {

        st = mid + 1;

      }

      else 
      {
           return mid; 
      }
     }
      return -1;

}
int main()
{
    vector<int>vec = { -1 , 0 , 3 ,4, 5, 9};
    int size = vec.size();
    int target;
    cout<< " Enter the target value = ";
    cin >> target;

    int result = binary_search( vec , size , target);
    cout <<" The index value of the target is = "<< result;
    return 0;
}

//  
