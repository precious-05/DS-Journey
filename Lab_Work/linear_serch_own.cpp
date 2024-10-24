#include<iostream>
using namespace std;
int main()
{
//search the number enetred by the user at specific index
	int user_input;
	int size;
	int count;
	int i;
	cout<<"Enter the size of array: ";
	cin>>size;
	int array[size];
    
	for(i=0; i<size; i++)
	{
		cout<<"Enter array element:";
		cin>>array[i];
	}
	
	cout<<endl<<endl<<"Array elements are: ";
	for(i=0; i<size; i++)
	{	
		cout<<array[i]<<" ";	
	}
	
    cout<<endl<<endl<<"From the array elements enter any number you want to find: ";
	cin>>user_input;
	
	for(i=0; i<size; i++)
	{	
		if(array[i]==user_input)
		{
			cout<<"The number "<<array[i]<<" found at position index: "<<i<<endl;
		}
		else
		{
			cout<<"The number "<<user_input<<" not found at index "<<i<<endl;
		}
	}
	
	
	return 0;
}
