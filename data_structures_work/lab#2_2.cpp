// Write a program that inputs of 1D array size from the user and get array value from the user and show them for both 1D & 2D Array
#include<iostream>
using namespace std;
int main()
{
int var;	
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

}
