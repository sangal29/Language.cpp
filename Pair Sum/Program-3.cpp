// Program-3 :This is the optimize aproch of the pair sum problem 

#include<iostream>
#include<vector>
using namespace std;
vector<int>sum(vector<int>vecc ,int target , int size)
{
   vector<int>ans;
   int i = 0; 
   int j = size -1;
   

    while( i < j )
    { 
        int pair  = vecc[i] + vecc[j];
        if( pair < target)
        {
            i++;

        }
         else if( pair > target)
        {
            j--;
        }
         else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
         }
       

    }

     
}
int main()
{
    vector<int>pair_sum = { 2 , 7, 9 ,15};
    int size = pair_sum.size();
    int target;
    cout <<" Enter the target =  ";
    cin >> target;

    vector<int>result = sum( pair_sum , target , size);

    cout <<" The pair indises  = "<<result[0] <<" and "<<result[1]<<endl;
    cout<< "The value of pair sum = "<<pair_sum[result[0]] << " and "<< pair_sum[result[1]];

    return 0;
}