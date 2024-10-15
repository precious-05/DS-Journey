#include<iostream>
using namespace std;
int main()
{

//Null Pointer
// Such a pointer which does not point any valid location
// Basically used in Trees or Linked Lists
// What is the main putpose of declaring anu null pointer ??
// Printing a pointer without assigning it any value
int*ptr;
//cout<<ptr; //It will generate a garbage value

ptr=NULL;
//cout<<endl<<ptr;  
// Null pointer makes the memory address in a pointer empty instead of a garbage value
// We cannot dereference a NULL pointer bcz it does not refer to any valid memory location "Segmentation Error occurs"




//-----------------------------------------------------------------Part 2-------------------------------------------------------------
int one=1010; 
int*p=&one;
int**q=&p;
cout<<*p<<endl<<endl;  //1010
cout<<**q<<endl<<endl; //1010
cout<<p<<endl<<endl;   //address of 1010
cout<<*q;              //address of p

    return 0;
}