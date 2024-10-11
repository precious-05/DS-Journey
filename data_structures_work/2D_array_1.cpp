#include<iostream>
using namespace std;
int main()
{
	int arr[3][4];
	int i,j;
		
	for( i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{ 
		    cout<<"array["<<i<<"]["<<j<<"]"<<endl;
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	cout<<endl<<endl<<"2D Array elements are: "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
