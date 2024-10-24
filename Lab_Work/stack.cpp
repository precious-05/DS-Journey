#include<iostream>
using namespace std;

int stack[100], n=100,  top=-1;


void push(int value)
{
    if(top>n-1)
    {
        cout<<"Stack is OverFlow";
    }

    else
    {
        top++;
       stack[top]=value;
       cout<<"The push value is: "<<stack[top];

    }
}


void pop()
{
    if(top<=-1)
    {
        cout<<"Stack is Underflow";
    }

    else
    {
      cout<<"The poped element is: "<<stack[top];
      top--;
    }

   

}



int main()
{

int choice,value;
cout<<"Enter the choice,  Choice 1 for push operation & choice 2 for POP operation: ";
cin>>choice;


switch(choice)
{
   

    case 1:
    cout<<endl<<"Enter the Value to push in the stack: ";
    cin>>value;
    cout<<endl;
    push(value);
    break;
    
    
    case 2:
    pop();
    break;


    default:
    cout<<"Invalid Choice";
    exit;
}





    return 0;
}