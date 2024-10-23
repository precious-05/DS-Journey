#include<iostream>
using namespace std;


class Node
{
public:
int data;
Node*next;
Node(int value)
{
 this->data=value;
 next=nullptr;
}

};


class LinkedList
{
  private:
  Node* head;

  public:
  LinkedList()
  {
    head=nullptr;
  }

  void insertAtEnd(int value)
  {
    Node* newNode = new Node(value);

    if(head==nullptr)
    {
      head=newNode;
    }

    else
    
    {
      Node* temp=head;
      while(temp ->next!= nullptr)
      {
        temp=temp->next;
      }
      temp->next=newNode;
    }
  }

  



};




int main()
{

    LinkedList List;
    List.insertionLast(10);
    List.insertionLast(10);
    List.insertionLast(10);
    List.insertionLast(10);
    List.insertionLast(10);
    List.insertionLast(10);
    List.insertionLast(10);
    List.insertionLast(10);

}
