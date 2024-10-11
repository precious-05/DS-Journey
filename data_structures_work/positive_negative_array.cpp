
#include<iostream>
using namespace std;
int main()
{    

//program#1 Fill array with only positive numbers only entered  by the user if found any -ve number in array else "no -ve number found"

int c;
int size;
int array[size];
cout<<"Please enter the size of array: ";
cin>>size;


for(c=0; c<size; c++)
{
	cout<<"\nPlease enter the element of array: ";
	cin>>array[c];
}

cout<<endl<<endl;
cout<<endl<<"The elements of array are: ";

for(int y=0; y<size; y++)
{
	cout<<array[y]<<" ";
}

cout<<endl<<endl;

for(int e=0; e<size; e++)
{
	if(array[e]<0)
	{
		cout<<"Negative number found at position " << e <<" please enter any positive number: ";
		cin>>array[e];
	}

}


cout<<"The array with all posiive numbers is: ";
for(int d=0; d<size; d++)
{
	
	cout<<array[d]<<" ";
}




return 0;
}
