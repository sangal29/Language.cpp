// practise 0f bruteforce approch of maxwater in the container 

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxWater( vector<int>nums , int size)
{
    int container = 0 ;
    int area = 1;
    int height;
    int  width;

    for( int i = 0; i < size ; i++)
  {
       for( int j = i+1; j < size; j++)

       {
         width = j - i;
         height = min( nums[i] , nums[j]);
         area = width * height;
         container = max(area , container);
       }
  }
  return container;

    

}
int main()
{
    vector<int>max_water = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = max_water.size();

    int result = maxWater(max_water , size);
    cout << " The max water hold by contaier area is = " << result;
    return 0;
}