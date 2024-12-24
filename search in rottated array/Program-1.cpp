#include <iostream>
#include <vector>
using namespace std;
int rotated_array(vector<int> nums, int size, int target)
{
    int st = 0;
    int end = size - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2; // this is use to avoide the overflow conditon

        //  if the mid value is equal to the target then

        if (nums[mid] == target)
        {
            return mid;
        }

        // left part shorted
        if (st <= nums[mid])
        {
            if (nums[st] <= target && target < nums[mid]) // remove equal for stricly chek the comndition 
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        // Right shorted
        else
        {

            if (nums[mid] < target && target <= nums[mid]) // remove equal for stricly chek the comndition 
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{

    // vector insilization
    // vector<int> vec = { 4, 5, 6, 7, 0, 1, 2};
       vector<int> vec = { 5,1,3};
    int size = vec.size();

    // target insilization

    int target;
    cout << "  Enter the target = ";
    cin >> target;

    // function call
    int result = rotated_array(vec, size, target);

    // output of the code
    cout << " The target  value index is = " << result;
    return 0;
}



