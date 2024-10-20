#include<iostream>
#include<string>
using namespace std;

    //Constructor: Special method invoked automatically at the time of Object Creation
    //1: Same name as class name
    //Does'nt have any return type
    //Only called once(at the time of object Creation)
    //Memory allocation happens when Constructor is called


class Student
{
    public:
    Student()
    {
        cout<<"Default Constructor of Student Class \n";
    }
};





class University
{

public:
string department, subject;

University(string d, string s)
{
 department=d;
 subject=s;
}


void display()
{
    cout<<"The department is: "<<department<<endl;
    cout<<"The Subject is: "<<subject<<endl;
}

};






int main()
{
  Student student;
  Student student2;

  University U1("Computer Science","Data Structures");
  U1.display();

return 0;

}