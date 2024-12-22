// program - 3 : This program is the mosst optimal approch to find the product of the 
// the array except the number 

#include<iostream>
#include<vector>
using namespace std;

    vector<int>product(vector<int>nums , int size)
    {
       vector<int>ans( size , 1);

       // prefix calculation
        for( int i = 1; i< size; i++)
        {
            ans[i] = ans[i -1]* nums[ i - 1];

        }
        // suffix calculation 
        int suffix = 1;
        for( int j = size - 2; j >= 0; j--)
        {
            suffix *= nums[j + 1];
            ans[j] *= suffix;
        }
        return ans;
    }

int main()
{
    vector<int>element = { 1,2,3,4};
    int size = element.size();

    vector<int>result = product( element , size);
    cout << " The product of the array except the number is = " << endl;
    for( int i : result)
    {
        cout << i <<"  ";
    }
    cout << endl;
}
