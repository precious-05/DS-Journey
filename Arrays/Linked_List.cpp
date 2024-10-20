#include<iostream>
#include<stdlib.h>
using namespace std;

//Class Node
class Node
{
  private:
  int object;
  Node*nextNode;

  public:
  int get()
  {
    return object;
  };

  void remove()
  {

  };

  void set(int object)
  {
    this->object=object;
  };

  Node*getNext()
  {
    return nextNode;
  };

  void setNext(Node*nextNode)
  {
    this->nextNode=nextNode;
  };
  

};

// List Class
class List
{
public:
List()
{
  
    headNode=new Node();
    headNode->setNext(NULL);
    currentNode=NULL;
    lastCurrentNode=NULL;
    size=0;
};

void add(int addObject);
int get();
bool next();
friend void traverse( List list);
friend List addNodes();

private:
int size;
Node*headNode;
Node*currentNode;
Node*lastCurrentNode;






};

// Constructor
/* List::List()
{
    headNode=new Node();
    headNode->setNext(NULL);
    currentNode=NULL;
    lastCurrentNode=NULL;
    size=0;
    
} */



//add() clas method
void List::add(int addObject)
{
    Node*newNode=new Node();
    newNode->set(addObject);
    if(currentNode!=NULL)
    {
        newNode->setNext(currentNode->getNext());
        currentNode->setNext(newNode);
        lastCurrentNode=currentNode;
        currentNode=newNode;
    }

    else
    {
        newNode->setNext(NULL);
        headNode->setNext(newNode);
        lastCurrentNode=headNode;
        currentNode=newNode;

    }
    size++;
}

// Get class method
int List::get()
{
    if(currentNode!=NULL)
    return currentNode->get();
}

// Next class Mehtod
 bool List::next()
{
    if(currentNode==NULL)  return false;
    lastCurrentNode=currentNode;
    currentNode=currentNode->getNext();
    if(currentNode==NULL || size==0)
    return false;
    else return true;
} 

//
//void


void traverse(List list)
{
    Node*savedCurrentNode=list.currentNode;
    list.currentNode=list.headNode;


    for(int i=1; list.next();i++)
    {
      cout<<"\n Element "<<i<<"    "<<list.get();
    }

    list.currentNode=savedCurrentNode;
}

// Friend function to add nodes in the list

List addNodes()
{
    List list;
    list.add(2);
    list.add(6);
    list.add(8);
    list.add(7);
    list.add(1);
    list.add(9);
    list.add(10);
    list.add(100);
    list.add(18);
    list.add(17);
  
  cout<<"\n List Size = "<<list.size<<" "<<" \n";
  return list;
}

int main()
{
        List list= addNodes();
        traverse(list);


        return 0;
}