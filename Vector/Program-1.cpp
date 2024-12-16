//Program-1 : This program is about to vector syntax and for each loop 

#include<iostream>
#include<vector>
using namespace std;
int main()
{

 //  vector insalization 

  vector<int>veccc = { 1,2,3,4,5,6,9};

  // use of for each loop in the vector to print the number 
  
  for(int i : veccc)
  {
    cout <<i <<endl;
  }
    return 0;
}