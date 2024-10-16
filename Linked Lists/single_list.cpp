#include<iostream>
using namespace std;

//Single Linked List: It consists of sequence of elements called nodes containing 2 parts. " Data " & " Pointer to next node "
//The traversing is done in forward direction only


//       |Head|----->[data|next]-->[data|next]-->[data|next]-->[data|next]-->[data|next]-->[data|next]----->NULL

//--------------------------------------------Implementation of Linked List-----------------------------------------------------
//In Linked list each element is stored in the form of node. 
//So the 1st step is to define the Node



class Node                                                // The Node is not created here just its structure is defined here
{
 private:
 int data;                                             //Class Members
 Node *next;
 Node *head=NULL;                                    //Head Node

};





void insert(int n)                           // The Node is created here actually or insertion of elements is done here 
{
  Node *newNode = new Node;                 // new keyword is used for allocating the dynamic memory
}











int main()
{


    return 0;
}