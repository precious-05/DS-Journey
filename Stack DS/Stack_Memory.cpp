#include<iostream>
using namespace std;
int add(int num1, int num2)
{
    return num1+num2;
}




int main()
{
    int a=2;
    int b=3;
    int sum=add(a,b); 
    cout<<sum<<endl;


    return 0;
} 


/*
 When functions are called their Stack frames are added in our memory Stack , So in our program 1st of all the main function will be called
so its Stack frame will be added to the memory stack in which there will be its local variables like  |main() a,b,sum|

When add function is called then its Stack Frame will be added to the memory stack with its local variables num1,num2 like
|add() num1,num2|



It is not possible to access the local variables of main() method "a,b,sum" in the add function also 
It is not possible to access the local variables of add() method "num1,num2" because their scope is limited to their functions only


When the add function returns using "return" statement so the function will "PoP" from our stack
Similarly when we return from the main() it will also "PoP" from our stack


So we can notice that the order in which the functions are coming to the stack they are poping out in opposite order
So it is a fixed order which would always be followed....  It means alway add()  will remove 1st & then main()
If we want to follow any other order then it is not possible in the Memory Stack



*/






/*

void func1()
{
}

void func2()
{
}


void func3()
{
}

int main()
{
   func1();
   func2();
   func3();

   return 0;
}

Also our memory stack is of fixed size So if we are writing the program wherefunctions are calling again and again so they will
get adding in our stack frame and there will come a time when we will face " Stack Overflow". This condition can occur in recursion when there is 
not stopping condition. 


*/