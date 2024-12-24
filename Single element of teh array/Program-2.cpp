// Program-2 This program is optimal approch of the single element of the array 

#include<iostream>
#include<vector>
using namespace std;
 int index( vector<int>nums , int size)
{
    int st = 0;
    int end = size -1;

    while( st <= end)
    {
        int mid = st + (end - st)/2;
         
         // there are 3 corner case which  is important 

         // 1

        if( size == 1){
            return nums[0];
         }

         // 2
         if( mid == 0&& nums[0] != nums[1])
         {
            return nums[mid];
         }
          // 2
         if( mid  == size- 1 && nums[mid] != nums[size -2])
         {
            return nums[mid];
         }
         // if mid is the ans 
         if( nums[mid] != nums[mid + 1] && nums[mid] != nums[mid -1])
         {
            return nums[mid];
         }
        
        if( mid % 2 == 0)
        {
          if( nums[mid] == nums[mid + 1])
          {
             st = mid + 1;

          }
          else{
            end = mid -1;
          }
        }
        else{
            if( nums[mid - 1] == nums[mid])
            {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
  
}
int main()
{
    vector<int>vec = { 1,1,2,2,3,3,4,5,5,6,6};
    int size = vec.size();

    // function call 

    int result = index( vec , size);
    cout<<" The unique element of the array is = " << result;

    return 0;

}