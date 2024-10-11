#include<iostream>
using namespace std;
int main()
{
	//program-- Count the positive and -ve numbers in an array 
int var;	
int count1=0;
int count2=0;
int size;
int array[size];
cout<<"Please enter the size of array: ";
cin>>size;



for(var=0; var<size; var++)
{
	cout<<"\nPlease enter the element of array: ";
	cin>>array[var];
}

cout<<endl<<endl;
cout<<endl<<"The elements of array are: ";


for(var=0; var<size; var++)
{
	cout<<array[var]<<" ";
}

cout<<endl<<endl;	
	
	

for(var=0; var<size; var++)
{
	if(array[var]<0)
	{
		count1++;
	}
}

cout<<endl<<"Total number of negative elements in array are: "<<count1;	
	
	

for(var=0; var<size; var++)
{
	if(array[var]>0)
	{
		count2++;
	}
}

	
cout<<endl<<"Total number of positive elements in array are: "<<count2;		
	
	
	
	
	
	
	return 0;
}
