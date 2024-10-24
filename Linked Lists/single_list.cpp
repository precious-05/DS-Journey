#include<iostream>
using namespace std;




/*Linked list is a data structure which is formed by the combination of nodes where the node is the combination of Data and the address of next node
   |Head|----->[data|next]-->[data|next]-->[data|next]-->[data|next]-->[data|next]-->[data|next]----->NULL
*/



//1. Node Class: Understanding the Basics

class Node
{
  public:
  int data;   //To store the actual data of the node
  Node* next;  //Pointer to the next node in the list

  Node(int value)  //The constructor is called whenever we create a new node. It takes an integer value and assigns it to data.
  {
    this->data=value;    // Stores the value in the 'data' part of the node
    next=nullptr;        // Initially when a node is created it doesn't point to any other node so 'next' is null
  } 
};

/*Why is next initialized to nullptr?
When a node is created, it doesn't have any connection yet to the next node, so nullptr means "no next node." 
This helps us mark the end of the list later.
*/









/*List Class will manage the operations like insertion , deletion, updation etc 
Head is set to NULL which shows that in the start there will be no node in the list to which it would be pointing*/


class List
{
  private:
  Node* head;    // Pointer to the first node (head) of the list
  
  public:
  List()
  {
  head=nullptr;  // When the list is created, it's empty, so the head is null
  }




//3. Insertion at End Function: Adding New Nodes

void insertAtEnd(int value)
 {
   Node* newNode = new Node(value);                             
   /*Whenever you call insertAtEnd, you give it an integer value. This line creates a new node using that value. 
   The new keyword dynamically allocates memory for the node, and the constructor (Node(int value)) is called to initialize it.*/

   if(head==nullptr)             //Check if the list is empty
   {
    head = newNode;              // If the list is empty, the new node becomes the head (first node)
   }

   else                         //If the list is not empty, we need to add the new node at the end of the existing list.
   {
    Node* temp=head;            //temp is a temporary pointer that helps us traverse the list. Initially, it points to the head (the first node).
    while(temp->next !=nullptr)
    {
     temp=temp->next;
    }
     
     temp->next=newNode;
    }

     /*Why do we use while (temp->next != nullptr)?

This loop moves temp through the list until it finds the last node, which has temp->next == nullptr. 
We stop at the last node because that’s where we want to insert the new node.
Why is temp->next = newNode?
Once we find the last node, we update its next pointer to point to the new node. 
This links the new node to the end of the list, completing the insertion process.*/
}


void display()
{
   Node* temp = head;                           // Start from the head of the list
    while (temp != nullptr) {                  // Traverse until the end (nullptr)
        cout << temp->data << " -> ";         // displays the data of each node
        temp = temp->next;                   // Move to the next node
    }
    cout << "nullptr" << endl;             // End the display with 'nullptr' to show the list's end
}



void DeleteNode(Node* head)
{
   if(head==nullptr)
   {
     return;            //If the head is Null then it means that the lit is empty and there is no node in the List
   }

   if(head->next==nullptr)
   {
    delete head;
    return;
   }

   Node* temp=head;

   while(temp->next->data!=val)
   {
     temp=temp->next;
   }

   Node* toDelete = temp->next;
   temp->next=temp->next->next;
   delete(toDelete);

}

void deleteNodeAtStart(Node* &head, int val)
{
   Node* temp=head;
   head=head->next;
   delete(temp);

}


void deleteAtLast(Node* &head, int val)
{
  Node*temp=head;
  if(head==nullptr)
  {
    return;
  }
  
  if(head->next==nullptr)
  {
    delete head;
    return;
  }

  while(temp->next->next!=nullptr)
  {
    temp=temp->next;
  }

  delete(temp->next);
  temp->next=nullptr;
}


};






int main()
 {
    List list;        // Create a new linked list object
    
    list.insertAtEnd(10);   // Insert 10
    list.insertAtEnd(20);   // Insert 20
    list.insertAtEnd(30);   // Insert 30

    list.display();         // Display the list (expected: 10 -> 20 -> 30 -> nullptr)                        
    return 0;
}








