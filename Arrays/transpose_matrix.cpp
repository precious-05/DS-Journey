#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int row,col;
	cout<<"Enter the row size: ";
	cin>>row;
	cout<<"Enter the column size: ";
	cin>>col;
	int array[row][col];
	int temporary;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"array["<<i<<"]["<<j<<"]"<<endl;
			cin>>array[i][j];
		}
	}
	
	cout<<endl<<endl;
	cout<<"The 2D array is: ";
	cout<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<array[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	// Transpose of 2D array is 
	//     0  1  2
	// 0   1  2  3
	// 1   4  5  6
	// 2   7  8  9
	
/*	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			temporary=array[i][j];              
			array[i][j]=array[j][i];
			array[j][i]=temporary;
		}
	}*/
	
    cout<<endl<<endl;
	cout<<"The 2D array after taking transpose is: ";
	cout<<endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<array[j][i]<<"\t";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
