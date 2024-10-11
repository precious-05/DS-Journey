#include<iostream>
using namespace std;
int main()
{
	
	int array[2][2];
	int i,j;
	cout<<"\n2D Array \n";
   for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
   	{
   		    cout<<"\nInput the 2D array \n";
   			cout<<"array["<<i<<"]["<<j<<"]"<<endl;
   			cin>>array[i][j];
    }
   }
	
	
	
	
	cout<<endl<<endl<<"2D Array elements are: "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(array[i][j]%2==0)
			{
			cout<<array[i][j]<<"\t";
	     	}
		}
		cout<<endl;
	}
		
	
	
	
	
	
	
	
	return 0;
}
