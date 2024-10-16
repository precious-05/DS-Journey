#include<iostream>
using namespace std;


int search(int array[], int size, int value)
{
  for (int i = 0; i < size; i++) 
  {
        if (array[i] == value) 
        {
            return i;  // Returning the index if the value is found
        }

}
 return -1;  // Returning -1 if key is not found
}


int main(void)
{
    int size,value;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];
      cout<<endl<<endl<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the array element: ";
        cin>>array[i];
    }
 
     cout<<"Enter the element you want to search from the given elements: ";
     cin>>value;

     int output= search(array,size,value);
     if (output != -1)
      {
        cout << "Element found at index " << output << endl;
      } 
    else 
    {
        cout << "\n \n The value not found at any index" << endl;
    }




    return 0;
}