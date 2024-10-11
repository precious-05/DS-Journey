#include<iostream>
using namespace std;
int main()
{
	int arr[7]={23, 1, 5, 6, 0, 0, 0};
	for(int j=0;j<7;j++)
	{
		if(arr[j]==0)
		{
			arr[j]=-1;
		}
	
	}
	
    for(int k=0; k<7; k++)
	{
		cout<<arr[k]<<endl;
	}	
	
	
	return 0;
}
