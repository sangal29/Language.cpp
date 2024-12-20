// This is more optimal approch of  to find the majority element 

#include<iostream>
#include<vector>
using namespace std;
int element(vector<int>nums , int size)
{
    int freq = 0;
    int ans = 0;
    for( int i = 0; i < size; i++)
    {
        if(freq == 0);
        {
            ans = nums[i];
        }
        if(ans == nums[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main()
{
    vector<int>vesss = { 1,2,3,3,1,1,1,1};
    int size = vesss.size();

    int result = element(vesss, size);
    cout << " The major element is found "<<result;

    return 0;
}