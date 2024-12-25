// Program - 1 This is a hard level book allocation problem  

#include<iostream>
#include<vector>
using namespace std;
bool is_valid( vector<int>nums  , int n , int m , int mid)
{

}
int valid_ans( vector<int>vec , int size)
{
    int st = 0;
    int sum =  0; 
    for( int i = 0 ; i < size ; i++)
    {
        sum += vec[i];
    }
    int end = sum; 
    while( st <=  end)
    {
       int mid = st + ( end - st)/2;

       if( is_valid( vec , n , m , mid))
    }

}
int main()
{
     vector<int>vec = {7,2,5,10,8};
     int size = vec.size();

     int result = valid_ans( vec , size);
     cout << " The valid ans is = "<< result;

    return 0;
}