#include<iostream>
using namespace std;
int main()
{
	//------A program in which user enetrs an array of 10 numbers--------;
    //------User is asked to enter the choice if he wants only odd numbers then choice is one else even;
	int user_input;
	int size;
	char choice;
	int counter;
	cout<<"Please enter the size of array: ";
	cin>>size;
	int array[size];
	
	
	for(counter=0; counter<size; counter++)
	{
		cout<<"Enter the element you want to store in array: ";
		cin>>array[counter];
	}
	
	
		cout<<"\n---The elements are---: ";
		
		
		for(counter=0; counter<size; counter++)
	{
		cout<<array[counter]<<" ";	
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"Enter the choice:"<<endl;
	cout<<"Choice o for odd numbers & choice e for even numbers: ";
	cin>>choice;
	
	if(choice=='e')
	{
	cout<<"Even numbers in array are:";
	for(counter=0; counter<size; counter++)
	{
		if(array[counter]%2==0)
		{
		cout<<array[counter]<<" ";	
       	}
    }
	}
	
	
	else
	{
	cout<<"Odd numbers in array are:";
	for(counter=0; counter<size; counter++)
	{
		if(array[counter]%2!=0)
		{
		cout<<array[counter]<<" ";	
       	}
    }
	}
	
	

	
	
	return 0;
}
