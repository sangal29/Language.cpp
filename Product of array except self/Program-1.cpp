// Program-1 : This program is  product of array except self

#include <iostream>
#include <vector>
using namespace std;
vector<int> productOfNumb(vector<int> nums, int size)
{
    vector<int>ans( size, 1);
    for (int i = 0; i < size; i++)
    {
        int product = 1;
        for (int j = 0; j < size; j++)
        {
            if( i != j)
            product *= nums[j];
           
        }
        ans[i] = product;
    }
    return ans;
}
int main()
{
    vector<int> product = {1, 2, 3, 4};
    int size = product.size();
    vector<int>result = productOfNumb(product, size);

    cout << " The product of the array except self = " ;
    for( int i : result)
    {
        cout << i <<" ";
      
    }
      cout << endl;
    return 0;
}