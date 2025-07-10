
// # pragma-1 This is the progra for buy and sell  
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxprofit( vector<int>p , int size)
{
    int best_buy =p[0]; 
    int max_profit = 0;

    for( int i = 1; i < size; i++)
    {
        if( p[i]  > best_buy )
        {
           max_profit = max( max_profit, p[i] - best_buy);
        }
       
        best_buy = min(best_buy  , p[i]);
        

    }
     return max_profit;
   
}
int main()
{
    // vector<int>price = { 7,1,5,3,6,4};
    vector<int>price = { 1,2};
    int size = price.size();

    int result = maxprofit(price , size);
    cout <<" Max profit = " << result;
    return 0;
}
