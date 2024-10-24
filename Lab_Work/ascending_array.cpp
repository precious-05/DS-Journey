#include<iostream>
using namespace std;
int main()
{
   int temporary;
   int array[3];

   cout<<"Program to convert the array entered by the user in ascending order: "<<endl;
   for(int i=0; i<=3; i++)
   {
   	cout<<"Enter a Number: ";
   	cin>>array[i];
   }
   
   if(array[0]>array[1])
   {
   	 temporary=array[0];
   	 array[0]=array[1];
   	 array[1]=temporary; 	 
   }
   
   if(array[0]>array[2])
   {
   	temporary=array[0];
   	array[0]=array[2];
   	array[2]=temporary;
   }
   
   if(array[0]>array[3])
   {
   	temporary=array[0];
   	array[0]=array[3];
   	array[3]=temporary;
   }
   
    if(array[1]>array[2])
   {
   	temporary=array[1];
   	array[1]=array[2];
   	array[2]=temporary;
   }
   
    if(array[1]>array[3])
   {
   	temporary=array[1];
   	array[1]=array[3];
   	array[3]=temporary;
   }
   
     if(array[2]>array[3])
   {
   	temporary=array[2];
   	array[2]=array[3];
   	array[3]=temporary;
   }
   
   
   	cout<<"Ascending order of given array is: "<<endl;
    for(int j=0; j<=3; j++)
   {  
   	cout<<array[j]<<endl;
   }
  
	
	return 0;
}
