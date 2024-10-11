#include<iostream>
using namespace std;
int main()
{
	
	//Linear Search Program
	int array[5];
	int n,i,loc=-1;
	for(i=0;i<5;i++)
	{
    cout<<"Enter the array value: ";
     cin>>array[i];
    }
    
    	cout<<"Enter the value you want to find: ";
    	cin>>n;
    	   
    	
	for(i=0;i<5;i++)	
		if(array[i]==n)
	
		
			loc=i;
			if(loc==-1)
			cout<<"Value not found in the array";
			else
			cout<<"Value found at index "<<loc;
	    
			return 0;

	
 
	

}
