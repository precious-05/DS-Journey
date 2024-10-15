#include<iostream>
using namespace std;
//Pass By reference can be done by passing the pointers or by directly passing the memory address like &a

int change(int a) //passing by value
{
    a=a++;
 return a;
}


int pointer(int* b) //passing by  reference using pointers
{
   *b=900;
    return *b;
}


int alias(int &ref2) // pass by reference using alias 
// ---- here the & symbol is not indicating the memory address it is indicating the alias which means it is another name of ref variable 
// But in memory we are talking about the same variable
{
   ref2=500;
   return ref2;

}



int main()
{


int b, result_b , a,  result, ref;
b=9;
a=13;
ref=400;

result=change(a);

cout<<"The result of the Pass by value:      "<<result<<endl;
cout<<"The result of the Pass by reference using pointer:      "<<pointer(&b)<<endl;
cout<<"The result of the Pass by reference using alias    :      "<<alias(ref)<<endl;


    return 0;
}
