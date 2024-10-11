#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int row,col;

	cout<<"Enter the row size for  array: ";
	cin>>row;
	cout<<"Enter the column size for array: ";
	cin>>col;

		
	int array1[row][col];
	int array2[row][col];
	
	//1st 2D Array
	
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Enter the 1st array element: ";
			cin>>array1[i][j];
		}
	}
	
		
	cout<<endl<<endl;
	cout<<"The 1st 2D array is: ";
	cout<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<array1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
	// 2nd 2D array
	
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Enter the 2nd array element: ";
			cin>>array2[i][j];
		}
	}
	
		
	cout<<endl<<endl;
	cout<<"The 2nd 2D array is: ";                                                                                                                                     
	cout<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<array2[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	
	
	
	
	
	cout<<endl<<"The addition of both 2d arrays is "<<endl;
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<array1[i][j]+array2[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
