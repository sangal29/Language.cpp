// Program-1 : This program i sbrute force approch of the peak element of the array 

// letcode qution 852

#include<iostream>
#include<vector>
using namespace std;
int index( vector<int>nums , int size )
{
    for( int i = 0; i< size ; i++)
    {
        if (!( nums[i] < nums[i + 1]))
        {
            return i;
        }

    }
    return -1;
}

int main()
{
    // vector insiliztaion 

    vector<int>vec = { 0,3,8,9,5,2};
    int size = vec.size();

    

    // function call
    int result = index( vec , size);
    
    // output of the code 
     cout <<" The peak index of the mountain = "<< result;

    return 0;
}