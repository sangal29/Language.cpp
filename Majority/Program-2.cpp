// Program-2 : This program is base on moorevote algo  which is more suitable and 
// optimal approch of majority elemnt  using shorting in which first we include algorithm


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int element( vector<int>nums , int size)

{
    sort(nums.begin(), nums.end());
    int freq = 1;
    int ans = nums[0];
    for(int i = 1; i< size; i++)
    {
        if( nums[i] == nums[i -1])
        {
            freq++;

        }
        else
        {
          freq = 1; 
          ans = nums[i];
        }
        if( freq > size/2)
         {
            return ans;
         }
    }
    return -1;
}
int main()
{
   vector<int>majority_elemnt = {1,2,3,1,2,3,1,1,1,2,2,2,2,2,2,2};
   int size = majority_elemnt.size();

  int result = element(majority_elemnt, size);

   if(result == -1)
   {
    cout <<" The element is not found";

   }
   else{
    cout << " The element is found  = "<< result;
   }


return 0;

}