// Program-4 This program is give the index of the smallest and the largets number

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int Array[] = {22, 45, 67, 89, 234, 56, 75};
    int size = sizeof(Array) / sizeof(Array[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_Index = -1;
    int largest_Largest = -1;

    for (int i = 0; i < size; i++)
    {
        if (Array[i] < smallest)
        {
            smallest = Array[i];
            smallest_Index = i;
        }

        if (Array[i] > largest)
        {
            largest = Array[i];
            largest_Largest = i;
        }
    }

    cout << "smallest index of the array  = " << smallest_Index << endl;
    cout << "Smallest number of the array = " << smallest << endl;
    cout << " Largest Number of the array = " << largest << endl;
    cout << " largets index of the array = " << largest_Largest << endl;
}
