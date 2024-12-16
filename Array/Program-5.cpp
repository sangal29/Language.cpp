// program-5 : This program is to find the index of the target value in the index

// defination : Linear Search is one of the simplest searching algorithms used to find the position of a target value in a list or array in the linear way .

#include <iostream>
using namespace std;
int target_value(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == 6000)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int Array[] = {2, 3, 45, 66, 64, 5};
    int size = sizeof(Array) / sizeof(Array[0]);

    int target =target_value(Array, size);
    if( target = -1 )
    {
        cout << " Target value is not in the scope ";
    }
   else{
    cout << " The  target element index is = "<< target  << endl;
   }
    
    return 0;
}
