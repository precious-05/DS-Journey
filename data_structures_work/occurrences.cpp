
#include<iostream>
using namespace std;
int main()
{
//program#3 Count the number of occurances of a number in an array specified by the user
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
	
    cout<<endl<<endl<<"From the array elements enter any number whoose occurrences you want to count: ";
	cin>>user_input;
	
	for(i=0; i<size; i++)
	{	
		if(array[i]==user_input)
		{
			count++;
		}
	}
	
	cout<<endl<<endl<<"The number of occurrances of "<<user_input<<" in array is: "<<count;
	
	
	
	
	return 0;
}
