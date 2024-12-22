// Program -1 :

#include <iostream>
#include <vector>
#include <limits.h> // this is use when we trying to find min or max in qution
using namespace std;

int maxWaterContainer(vector<int> nums, int size)
{
    int maxWater = 0; // initaily maxWater is 0
    int area = 1;     // initialy are is 0
    int height, width;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            width = j - i;
            height = min(nums[i], nums[j]);
            area = height * width;
            maxWater = max(area, maxWater);
        }
    }
    return maxWater;
}
int main()
{
    vector<int> max_water = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = max_water.size();

    int result = maxWaterContainer(max_water, size);
    cout << " The max water hold by the conater = " << result;

    return 0;
}