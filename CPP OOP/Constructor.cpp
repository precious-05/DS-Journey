#include<iostream>
#include<string>
using namespace std;

    /* Constructor: Special method invoked automatically at the time of Object Creation
    1: Same name as class name
    Does'nt have any return type
    Only called once(at the time of object Creation)
    Memory allocation happens when Constructor is called */


class Student
{
    public:
    Student()
    {
        cout<<"Default Constructor of Student Class \n"<<endl;
    }
};











//--------------There can be multiple Constructors in a class which is a part of Constructor over loading "Polymorphism"
class University
{

public:
string department, subject,cafeteria;
int clasroom;



//-------------------------------------------------Default Constructor-------------------------------------------
University()            
{
 cout<<"Default Constructor of University Class \n"<<endl<<endl;
}





//-------------------------------------------Parameterized Constructor----------------------------------------
University(string department, string subject)
{
   (*this).department=department;   //It is another way of writing "this"  but it becomes complex
                                    //this is used with arrow operator to avoid the confusion of compiler that on left side 
                                    //there is variable name while on the right side there is parameter name (as both have same names)  see  point 1.1
    this-> subject=subject;
    cout<<"Parameterized Constructor of University Class \n"<<endl;
    cout<<"The department is: "<<department<<endl;
    cout<<"The Subject is: "<<subject<<endl<<endl;
}


//-------------------------------------------Constructor Overloading----------------------------------------
University(string department, string subject, int classroom)
{
 department= department;
 subject=subject;
 clasroom=classroom;


cout<<"Constructor Overloading of University Class \n"<<endl;
 cout<<"Department is:"<<department<<endl;
 cout<<"Subject is:"<<subject<<endl;
 cout<<"Classroom No is:"<<clasroom<<endl;

}





};













int main()
{
  Student student;
  Student student2;
  
  University U2;  //for default constructor
  University U1("Computer Science","Data Structures");  //For 1st parameterized constructor
  University U3("Mathemetics","Calculus",20);    //For the Constructor overloading

   

return 0;

}





/* 1.1________    this Pointer: this is a special pointer in C++ which points to the Current Object 
                   this->property is same as (*this).property 
                   
Why we needed to use this Pointer?? Such as in our Student Class we dont want that our parameters name should be in short such as "s" for Subject
so in  "Subject=Subject"  On the left side "Subject" means we are talking about the object's property
while on the right side "Subject" means we are talking about the  parameter
But this type of statement could be confusing for our compiler or Constructor because we cant understand that which one is the Object's Property

Whenever we want to show the object's property we can show it using   " this "    pointer



this->Subject=Subject;
this->department=department;

"" So in this way we can use This pointer to access the properties of the Object ""








How this pointer Exactly works??
>> In C++ whenever any object is Created the object occupies some Memory
   this pointer points the memory of this Object                  this--> (Mmeory of Object)
   Such as if the address of the memory is 100, so this is also a variable itself which stores under 100 
   because this is an automatically created pointer which always points to the calling object
   such as in University class the U1 is the calling object for the constructor -- University(string department, string subject)



*/