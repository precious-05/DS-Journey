#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j;
	cout<<"Enter the row size of 2D Array: ";
	cin>>row;
	cout<<"Enter the column size for the 2D Array: ";
	cin>>col;
	int array[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Enter the 2D array element: ";
			cin>>array[i][j];
		}
	}
	
	
	
	
	cout<<"The 2D Array elements are:"<<endl<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<array[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	cout<<endl<<endl<<"The 2D Array in rows reverse order is: ";
	cout<<endl;
	
	for(i=row-1;i>=0;i--)
	{
		for(j=0;j<col;j++)
		{
			cout<<array[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	return 0;
}
