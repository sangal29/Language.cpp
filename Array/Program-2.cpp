// Program-2 This Program is about to take input in array and output the result

#include<iostream>
using namespace std;
int main()
{

    int size;
    cout <<" Enter the size of array = " <<endl;
    cin>>size;

    int marks[size];
    

    for(int i = 0; i < size; i++)
    {
        cout<<" Enter the value of marks " << i <<endl;
        cin>> marks[i];
    }

    for(int i = 0; i< size; i++)
    {

        cout<< " Marks of student "<< i<< "=" <<marks[i] <<endl;

    }
    return 0;
}
