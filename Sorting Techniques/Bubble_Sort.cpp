#include<iostream>
using namespace std;
  //Sorting: The process of arranging the data in a particular order such as Ascending or Descending Order
  // In the following Sorting technique the time will be O(n^2) if the input size is n
  // For Sorting algorithms n^2 is not a good time complexity
  // For such algorithms good time complexity lies in " nlogn " Such as merge Sort etc
  

class Sort
{

public:

 int n=8;
 int array[8]= {7,2,5,9,10,3,6,1};



void display_array()
{
  cout<<endl<<"The Original Array is: "<<endl;
   for(int i=0;i<n;i++) 
   {
    cout<<array[i]<<" ";
   }
   cout<<endl;
}




void Bubble_Sort()
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





void sorted_array()
{
    cout<<endl<<"The Sorted Array is: "<<endl;
   for(int i=0;i<n;i++) 
   {
    cout<<array[i]<<" ";
   }
   cout<<endl;
}








};














int main()
{
  Sort S1;
  //S1.n=8;
  //S1.array[8]= {7,2,5,9,10,3,6,1};

  S1.display_array();
  S1.Bubble_Sort();
  S1.sorted_array();



    return 0;
}