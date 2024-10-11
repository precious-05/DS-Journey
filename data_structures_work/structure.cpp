#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
struct students
{
	int id,age;
	//char name[30];
	//char*name;
	string name;
	
};

students s;

cout<<"Enter student ID : ";
cin>>s.id;	
cin.ignore();


cout<<"Enter student age : ";
cin>>s.age;	
cin.ignore();

cout<<"Enter student name: ";
//cin>>s.name;	
//s.name=(char*) malloc(50* sizeof(char))
getline(cin,s.name);	



cout<<endl;
cout<<"Student ID is: "<<s.id<<endl;
cout<<"Student Age is: "<<s.age<<endl;
cout<<"Student name is: "<<s.name<<endl;



	return 0;
	
}
