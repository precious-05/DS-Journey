//OOP with C++ Full Course 
//Objects are real world " entities" while "Classes"  are "Blueprints"

#include<iostream>
#include<string>
using namespace std;

class Teacher
{
  
  private:
  int salary;                                        //There are only 3 access modifiers in C++ " Private , Public, Protected "   , 
                                                       //By default attributes and methods are private in C++
   

  public: 
  string name;      //Attribute
  string department;
  string subject;
 

   //Methods or Member Functions
  
  void changeDept(string newDept)
  {
    department=newDept;
    cout<<"New Department is: ";
    cout<<department;
  }
   
  //Setter 
  void setSalary(int salary)
  {
   salary=salary;
  }
  //Getter
  int getSalary()
  {
     return salary;
  }

};






int main()
{
  
  Teacher t1;
  t1.name= "Alina Ma'am";
  t1.department= "Computer Science";
  t1.subject= "Data Structures ";

  cout<<t1.name<<endl;
  cout<<t1.department<<endl;
  cout<<t1.subject<<endl<<endl;
  t1.setSalary(29000);
  cout<<"Salary is: "<<t1.getSalary()<<endl;  

  string changeDPT;
  cout<<"Enter the new department name: ";
  getline(cin,changeDPT);
  cout<<endl;
  t1.changeDept(changeDPT);
 

   





    return 0;
}
