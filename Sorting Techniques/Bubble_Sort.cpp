#include<iostream>
using namespace std;
  //Sorting: The process of arranging the data in a particular order such as Ascending or Descending Order
  // In the following Sorting technique the time will be O(n^2) if the input size is n
  // For Sorting algorithms n^2 is not a good time complexity
  // For such algorithms good time complexity lies in " nlogn " Such as merge Sort etc
  

void Bubble_Sort(int array[], int n)
{
   bool isSwap=false; // For more optimization of this Bubble Sort


  for(int i=0;i<n-1;i++)  //For iterations of the loop
  {
    for(int j=0; j<n-i-1; j++)   //Loop for comparisons
    {
        if(array[j]>array[j+1])
        {
            swap(array[j],array[j+1]);
            isSwap=true;
        }
    }


    if(!isSwap) //Array is already Sorted ----- Still after this optimization the Time complexity remains the Same for Bubble Sort
    {
        cout<<"The array is already Sorted ";
       return;
    }
  }
}






void display_array(int array[], int n)
{
  cout<<endl<<"The Original Array is: "<<endl;
   for(int i=0;i<n;i++) 
   {
    cout<<array[i]<<" ";
   }
   cout<<endl;
}





void sorted_array(int array[], int n)
{
    cout<<endl<<"The Sorted Array is: "<<endl;
   for(int i=0;i<n;i++) 
   {
    cout<<array[i]<<" ";
   }
   cout<<endl;
}







int main()
{
  
 int n=8;
 int array[]={7,2,5,9,10,3,6,1};


display_array(array,n);
Bubble_Sort(array,n);
sorted_array(array,n);



    return 0;
}