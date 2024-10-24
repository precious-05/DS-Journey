#include<iostream>
using namespace std;
int main()
{
	// Program to ask the user to enter the alphabets and then separate the vowels an consonants and display vowels/consonants from the given array
	int i;
	int size;
	//char alphabet;
	cout<<"Enter the size of array: ";
	cin>>size;
	char array[size];
	
	
	for(i=0;i<size;i++)
	{
		cout<<"Enter an english alphabet: ";
		cin>>array[i];
	}
	   cout<<endl;
	   cout<<"Vowels are: ";
	
	for(i=0;i<size;i++)
	{
	
	if(array[i]=='a' || array[i]=='A' || array[i]=='e' || array[i]=='E' || array[i]=='i' || array[i]=='I' || array[i]=='o' || array[i]=='O' || array[i]=='u' || array[i]=='U')
	{
		cout<<array[i]<<" ";
	}
    }
    
    cout<<endl;
    cout<<endl;
    
 
    cout<<"Consonants are: ";
    
    
    for(int j=0;j<size;j++)
	{	
	if(array[j]!='a' && array[j]!='A' && array[j]!='e' && array[j]!='E' && array[j]!='i' && array[j]!='I' && array[j]!='o' && array[j]!='O' && array[j]!='u' && array[j]!='U')
	{
		cout<<array[j]<<" ";
	}
    }
	
	
	
	return 0;
}
