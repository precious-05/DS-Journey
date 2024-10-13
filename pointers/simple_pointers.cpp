#include<iostream>
using namespace std;
int main()
{

// Reference Means Address
//Dereference means the value stored at the address


// Address operator can be used for the memory representation of the variables
// Pointers are the special variables in C++ that store the address of other variables

int a=10;
float price=100.25;
//cout<<&a<<endl;     //Using ampersand printing the address of the variable a

int*pntr=&a;
float*pntr2=&price;


cout<<"The address of a is  "<<pntr<<endl;
cout<<"The value of a is  "<<*pntr<<endl<<endl;       
cout<<"The value of a using *(&a) is: " <<*(&a)<<endl;                         //*(0xd2551ffe1c)
cout<<"The address of price is  "<<pntr2<<endl;
cout<<"The value of price is  "<<*pntr2<<endl;                                    //*(0xd2551ffe18)



//Pointer to Pointer Double Pointers **
int**pntr_a=&pntr;
cout<<pntr_a<<endl;
cout<<endl<<*pntr_a<<endl;

pntr++;
cout<<endl<<**pntr_a; //It will give the garbage value

    return 0;
}
