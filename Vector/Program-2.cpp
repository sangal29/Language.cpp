// Program-2 : This program is about to tell how we find the single elemnt in the vector

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vecc = {2,3,4,2,3,5};
    int ans  = 0;
    for(int val: vecc)
    {
        
        ans ^= val;
    }

    cout << ans;
    return 0;

}

