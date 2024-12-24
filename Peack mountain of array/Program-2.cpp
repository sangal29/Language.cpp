// Program - 2 : This program is the optimal approch of the peak elemnt of teh array 

#include<iostream>
#include<vector>
using namespace std;

// function insilization 

int index( vector<int>nums , int size)
{
    int st = 1;        
    int end = size - 2;

    // important is that we use start 1 not zero and end with n - 2 bcs 
    // in qution givn there never be st or end become the index or it overcome the condition
    

    while( st <= end){

    int mid = st + ( end - st)/ 2;

        if( nums[mid] > nums[ mid + 1] && nums[mid] > nums[mid - 1])
        {
            return mid;

        }
       
       if( nums[mid - 1] < nums[ mid])
       { 
        st = mid + 1;
          
       }
       else {
         end = mid - 1;
       }
    }
    
       
    

}

// main function 
int main()
{
    // vector and size 
    vector<int>vec = { 0,3 , 8 ,7 , 5 , 2};
    int size = vec.size();



    // function call
   
   int result = index( vec , size);
   cout <<" The peak  value index is = "<< result;

    return 0;
}