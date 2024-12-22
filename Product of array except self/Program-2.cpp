// Program - 2 this is optimal approch of product of the array using prefix and suffix
//  but in  this only time complexy is balanced not space

#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int> nums, int size)
{
    vector<int> ans(size, 1);
    vector<int> preffix(size, 1);
    vector<int> suffix(size, 1);

    for (int i = 1; i < size; i++)
    {
        preffix[i] = nums[i - 1] * preffix[i - 1];
    }
    for (int j = size - 2; j >= 0; j--) // in this loop we include 0 also so = is imp
    {
        suffix[j] = nums[j + 1] * suffix[j + 1];
    }
    for (int k = 0; k < size; k++)
    {
        ans[k] = preffix[k] * suffix[k];
    }

    return ans;
}

int main()
{
    vector<int> number = {1, 2, 3, 4};
    int size = number.size();

    vector<int> result = product(number, size);
    cout << " The give product of the array except the number is = " << endl;
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}