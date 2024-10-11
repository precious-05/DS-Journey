#include<iostream>
using namespace std;
int main()
{
	int row,column;
	cout<<"Enter the row size: ";
	cin>>row;
	cout<<"Enter the column size: ";
	cin>>column;
	int array[row][column];
	int i,j;

	cout<<"\n2D Array \n";
	
   for(i=0;i<row;i++)
   {
   	for(j=0;j<column;j++)
   	{
   		    cout<<"\nInput the 2D array \n";
   			cout<<"array["<<i<<"]["<<j<<"]"<<endl;
   			cin>>array[i][j];
    }
   }
	
	
	
	
	cout<<endl<<endl<<"2D Array elements are: "<<endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cout<<array[i][j]<<"\t";
	     	
		}
		cout<<endl;
	}
		
	
	
	
		
	
	
	return 0;
}
