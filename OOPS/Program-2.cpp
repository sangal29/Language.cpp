//  Program - 2 this program is concepet to learn dynamic memory allocation 


#include<iostream>
#include<string>
using namespace std;
class Student {
 public:
 string name;
 double cgpa;


 Student( string name , double cgpa)
 {
    this->name = name;
    this->cgpa = cgpa;
 }
 Student( const Student &obj){
    this ->name = obj.name;
    this ->cgpa = obj.cgpa; 
 }

 void get_info(){
    cout <<"Name :" << name<< endl;
    cout <<" CGPA :" <<  cgpa<< endl;
    
 }

};
int main()
{
    Student s1("Rishabh sangal ", 8.9);
    s1.get_info();   
    return 0;
}