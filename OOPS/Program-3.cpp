//Program 3 This program is about to inheritance 

// Inheritance is define as when properties and member function of the base class passe to the derived class is know as 
   // inheritance  

#include<iostream>
#include<string>
using namespace std;
class  Person{

public:
    string name ;
    int age;


    // Person (string name , int age )
    // {
    //     this -> name = name;
    //     this -> age = age;
    // }

    person (){

    }

};

class Student : public Person {
    public:

    int roll_no ;

    void get_info(){
        cout << " name :" << name << endl ;
        cout <<" age :"<< age << endl;
        cout <<" roll no : "<< roll_no << endl;
    }
};
int main()
{
    Student s1;
    s1.name = " Rishabh";
    s1.age = 22;
    s1.roll_no = 01;

    s1.get_info();
    
    return 0;
}