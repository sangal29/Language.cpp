//  Program one this is lecture of love baber 

#include<iostream>
#include<string>
using namespace std;
class hero{

public:

int value;
string name;

private:
int level;

public:

int getter()
{
 return level;
}
void stter(int l)
{
  level = l;
} 


};
int main()
{

hero h1;

h1.value = 12;
h1.name =" ram";

h1.stter(6);
cout << " teh return value "<<h1.getter() << endl;

cout << h1.value << endl;
cout <<h1.name << endl;
}
