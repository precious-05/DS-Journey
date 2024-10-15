#include<iostream>
using namespace std;
int main()
{
// Increment(++)  /  Decrement(--)
int a,b,c,d;
a=10,b=20,c=30,d=40;
int *p1=&a;
int *p2=&b;
int *p3=&c;
int *p4=&d;

cout<<endl<<p1;
cout<<endl<<p2;
cout<<endl<<p3;
cout<<endl<<p4;
cout<<endl<<endl;


cout<<endl<<*p1;
cout<<endl<<*p2;
cout<<endl<<*p3;
cout<<endl<<*p4;


++p1;                //It will add 4 bytes
cout<<endl<<endl<<p1;
cout<<endl<<*p1;

--p4;                //It will add 4 bytes
cout<<endl<<p4;
cout<<endl<<*p4;


                  // Addition / Subtraction is same with the pointers as the increment / decrement is 
p2=p2+2;          // 1 int or 4 Bytes
cout<<endl<<endl<<p2;
cout<<endl<<*p2;


//Basically addition or subtraction / increment , decrement are used with array pointer because of contiguous memory locations in array
cout<<endl<<endl<<endl;
int array[]={1,2,3,4,5};

cout<<*array<<endl;
cout<<*(array+1)<<endl;
cout<<*(array+2)<<endl;
cout<<*(array+3)<<endl;
cout<<*(array+4)<<endl<<endl<<endl;



//-------------------------pointer addition is not allowed in C++---------------------------------------------
//-------------------------pointer subtraction is allowed in C++ such as--------------------------------------
int x=10,y=20;
int *ptr1,*ptr2;
ptr1=&x;
ptr2=&y;

cout<<ptr1<<endl;
cout<<ptr2<<endl<<endl;
//cout<<ptr1+ptr2;  // It will generate error
cout<<ptr1-ptr2<<endl<<endl;


// (int)ptr1 ___________ (int)ptr2
// The subtraction gives the no of block of type(int)
// Such as memory of ptr1 = 108   &  memory of ptr2=100  so after subtracting ptr1-ptr2
// As we know that b/w 108 and 100 there is memory of 8 bytes which means 2 integer memory 


int *ptr4;
int *ptr3;

cout<<"The pointers are as following: "<<endl;
cout<<ptr3<<endl;
cout<<ptr4<<endl<<endl;


cout<<"The comparison of pointers is as following: "<<endl;
cout<<(ptr3==ptr4)<<endl;
cout<<(ptr3<ptr4)<<endl;
cout<<(ptr3>ptr4)<<endl;

    return 0;
}