
// Program-1 This program is a intoductry of array syntax and other

#include <iostream>
using namespace std;
int main()
{
    int array[] = {11, 223, 33, 43, 53};
    int size = sizeof(array) / sizeof(array[0]) - 1;
    for (int i = 0; i <= size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
