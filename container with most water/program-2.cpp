// Program-2 : This the optimal approch  for max water of the container 


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxWater( vector<int>nums , int size)
{
    int max_water = 0;
    int lp = 0;
    int rp = size - 1;
    int width , hight ;

    while ( lp <= rp)
    {
       width =rp -lp;
       hight = min(nums[lp] , nums[rp]);
       int cuurent_water = width * hight;
       max_water = max(cuurent_water , max_water);
       nums[lp] < nums[rp] ? lp++ : rp--;
    }
    return max_water;

 }
int main()
{
   vector<int>conatiner = {1, 8, 6, 2, 5, 4, 8, 3, 7};
   int size = conatiner.size();

   int result =maxWater(conatiner , size);
   cout << " The max water container = " << result;

    return 0;
}