// Program-1 :This is the Brute force approch of the pair sum

#include <iostream>
#include <vector>
using namespace std;

// function insilization

void sum(vector<int> vec, int size, int target_value)
{
    bool is_found = false;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (vec[i] + vec[j] == target_value)
            {
                is_found = true;
                cout << " The pais is found ";
                cout << endl;
                cout << " The first value of pair sum is =  " << vec[i] << " and  Index is =  " << i;
                cout << endl;
                cout << "The second value of pair sum is = " << vec[j] << "and index is  = " << j;
                break;
            }
        }
        if (is_found)
        {
            break;
        }
    }
    if (is_found == false)
    {
        cout << " The pair sum is not found";
    }
}

// main function

int main()
{
    vector<int> pair_sum = {2, 7, 11, 15};
    int size = pair_sum.size() - 1;
    int target;
    cout << " Enter the target sum = ";
    cin >> target;

    // function call

    sum(pair_sum, size, target);

    return 0;
}