#include<iostream>
using namespace std;
int main()
{
 // Pointers in C++
 int first;
 cout<<"Enter the 1st element: ";
 cin>>first;

int second;
cout<<"Enter the 2nd element: ";
cin>>second;

 int *ptr=&first;
 int *ptr2;
 ptr2=&second;

cout<<"The memory address of the element "<<first<< " is "<<endl;
cout<<ptr;
cout<<endl<<endl;

cout<<"The memory address of the element "<<second<<" is "<<endl;
cout<<ptr2;

cout<<endl<<endl;

cout<<" The element at the memory address " <<ptr<<" = "<<*ptr;
cout<<endl<<endl;
cout<<"The element at the memory address "<<ptr2<< " = "<<*ptr2;



cout<<endl<<endl<<endl<<"The memory address of first element using ampersand is: "<<&first<<endl<<endl;
cout<<"The memory address of the 2nd element using ampersand is: "<<&second;


cout<<endl<<endl<<endl<<"Now Changing the address of the pointer variable having address "<<ptr;
ptr=&second;
cout<<endl<<endl<<"The memory address of the 1st pointer after change is "<<ptr<<endl<<endl;
cout<<"The value at the memory address of the 1st pointer is now pointing to the value of "<<*ptr;


    return 0;
}