// Program-1 : This program is  the problem of Majority elemnet that means
//  if the frequecy is more than the  N/2 than that is the elemnt

#include <iostream>
#include <vector>
using namespace std;

// Function  isilization
int element(vector<int> num, int size)
{
    for (int value : num)
    {
        int freq = 0;
        for (int intiger : num)
        {
            if (value == intiger)
            {
                freq++;
            }
        }
        if (freq > size / 2)
        {
            return value;
        }
    }
    return -1;
}

int main()
{
    vector<int> majority_elemnt = {1, 2, 1, 2, 1, 1,2,2,1};
    int size = majority_elemnt.size();

    int result = element(majority_elemnt, size);

    if (result == -1)
    {
        cout << " The majority element is not found in the array ";
    }
    else
    {

        cout << " The majority element is = " << result;
    }

    return 0;
}