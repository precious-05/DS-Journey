#include<iostream>
using namespace std;


int main()
{

   int a=4;
   int* ptr= &a;


   cout<<"The value of a is: "<<*ptr;

   //new keyword / Operator

   int *p = new int(40);
   cout<<"The value at p is: "<<*p<<endl;


   int *arr= new int[3];
   arr[0]=10;
   arr[1]=20;
   arr[2]=30;

   cout<<"The value of arr[0] is: "<<arr[0]<<endl;
   cout<<"The value of arr[1] is: "<<arr[1]<<endl;
   cout<<"The value of arr[2] is: "<<arr[2]<<endl<<endl;
  



    //delete operator/ keyword
    
   delete[] arr; 
   // arr = nullptr;         //Its a good Practice in C++

  /*The values of arr after deletion might still show the old values, or they might show garbage data, or the program could crash—this is 
  undefined behavior.*/
  
   cout<<"The value of arr[0] is: "<<arr[0]<<endl;
   cout<<"The value of arr[1] is: "<<arr[1]<<endl;
   cout<<"The value of arr[2] is: "<<arr[2]<<endl;
  

//In short, even though we are seeing the same values after delete[] the memory is logically freed,
// and it's dangerous to access it because the program could behave unexpectedly.


   delete p;
   cout<<"The value at p is: "<<*p<<endl;

    return 0;
}