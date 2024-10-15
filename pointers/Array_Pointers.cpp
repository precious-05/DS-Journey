#include<iostream>
using namespace std;
int main()
{
    /* Array Pointer is of a Special Category which is called "Constant Pointer"
    We cannot do like (array=&b) or (*array=20) as we do with other pointers */


    //int arr[]={1,2,3,4,5}
    //In C++ the array name "arr" is actually a spexial variable which is of type pointer
    //This Pointer always points to the 0th index element of the array
    //verifying the above thing


    
    int array[]={17,2,3,4,5};
     
    cout<<array;        //It will print out the memory address 
    cout<<endl<<endl;
    cout<<*array;      // It will give the value at the 0th index
    return 0;
}