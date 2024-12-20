// Program - 2 : This is a second brute force approch in which we use vector.push opration 

// In this code we insilize the second vector when the if conditon
// is true than it push the value in the vector

#include<iostream>
#include<vector>
using namespace std;

vector<int>sum(vector<int>vecc , int target , int size)
{
   vector<int>vec_2;
   for( int i = 0; i < size; i++)
   {
    for( int j = i + 1; j < size; j++)
    {
        if(vecc[i] + vecc[j] == target)
        {
            vec_2.push_back(i);
            vec_2.push_back(j);
            return vec_2;
        }
    }
   }
    return vec_2;
}
int main()
{
    
    vector<int>pair_sum = { 2,7,11,15};
    int size = pair_sum.size();
    int target;
    cout <<" Enter the target value = ";
    cin >> target;

     vector<int>result= sum( pair_sum , target , size);
   cout << " the index are = " << result[0] <<" ," <<  result[1]<<endl;
   cout << " The value of the indises = " << pair_sum[result[0]] << " , " <<pair_sum[result[1]];
    return 0;
}