// Program 1 is a basic syntax of the  of creating an object 

#include<iostream>
#include<string>
using namespace std;
class Teacher {
// Property 
private: double salary;
public:
// Teacher(){
//    department = " computer sci" ;    //  This is non parametrice constructor 
// }

Teacher(  string n,  string d , double s ){
    name = n;
    department = d;
    salary = s;
}
 string name;
 string department;
 string subject;


// methos or we also called member function in cpp  

void  department_1 (string departmentChange )
{
    department = departmentChange;
}

void set_salary ( double s)
{
    salary = s;
}
double get_salary(){
    return salary;

}

void get_info(){
    cout << name << endl;
    cout << salary <<endl;
}
};

int main()
{
 
 Teacher t1( " Sangal ", " cs ", 2500);

    
    // Teacher obj_1;
    // Teacher obj_2;
    // Teacher obj_3;

    // obj_1.name = "Rishabh";
    // // obj_1.department = "Programing";
    // obj_1.subject ="cppp";
    // obj_1.set_salary(998.89);


// cout <<obj_1.name<< endl;

// // cout << obj_1.salary;
// cout <<obj_1.get_salary() <<endl;
// cout << obj_1.department << endl;
// cout <<obj_2.department<<endl;  




t1.get_info();
    return 0;
}