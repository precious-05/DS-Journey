#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p = new int();
    *p=10;
    cout<<*p<<endl;
    cout<<p<<endl;


    delete(p);
    cout<<*p<<endl;
    cout<<p<<endl;


    p = new int[4];      //Array having size 4 , here p is not needed to be declared again
    delete[]p;
    p=NULL;

    cout<<*p<<endl;
    cout<<p<<endl;
    return 0;

}



/*
Manually allocation or deallocation of memory is done using heap
We can also call heap as a free store as its size is not fixed. 


int a=10;                      Memory allocated to it in Stack

int *p = new int();            we use the "new" operator for storing the variable in heap
                               P will not directly added in heap rather it will be stored in stack rather it will point to the memory address
                               where the memory is allocated to us for Storing integer. 
                               Here it acts like a global variable , and the memory allocated can be access anytime anywhere as long as we have memory address
 *p=10;





   


    delete(p);                 delete operator is used to deallocate the memory from the heap. This will just delete the memory allocated in heap
                               but the pointer still exists in the Stack which is called "Dangling Pointer"
                               Dangling pointer means that it is pointing to the memory location where no value is Stored



    p=new int[4];              The dangling pointer should not exist. So we can either reuse it by pointing to anyother variable in heap
                               Or we have to remove the pointer from Stack too.
                               Ab 4 Size k array ko memory allocate ho jygi or P pointer us array ko point karega. Array k 0 index ka address
                               P mein Store kr lega.







    delete[]p;                 It is used for deleting an array from heap
    p=NULL;                    Is s epata chl jyga k ye heap mein ksi position ko point nahi kr rha. Or main() k exit hte hi p b destroy ho jyga







    Importance of deallocationg memory. If we not do this then it causes memory leak which is a situation in heap when we dont delete memory
    it could cause problem in server. So we should always avoid the Memory Leak
                        

*/