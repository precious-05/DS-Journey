#include<iostream>
using namespace std;
#include<vector>
int main()
{

  vector<int> vec={10,2,3};  //0 value because no elements is stored yet
  //cout<<vec[0];  //It will generate error
  cout<<vec[0]<<endl;
  cout<<vec.at(0)<<endl;   //at function








  cout<<"The other way of initialization"<<endl;
   vector<int>v(3,0);
  cout<<v[0]<<endl;
  cout<<v[1]<<endl;
  cout<<v[2]<<endl;
  cout<<v[3]<<endl<<endl;

   









//for each loop, here i will not store the index but the value at the indexes

cout<<"Using for each loop:"<<endl;
  for(int i: vec)
  {
    cout<<i<<endl;
  }





  //Vector Functions
  cout<<"vec size= "<<vec.size()<<endl;
  cout<<"v   size= "<<v.size()<<endl<<endl;










//Push_back function
vec.push_back(25);
vec.push_back(100);
cout<<"Capacity after push_back() = "<<vec.capacity()<<endl<<endl;
vec.push_back(1000);
cout<<"Capacity after push_back() = "<<vec.capacity()<<endl<<endl;
cout<<"Size after push_back() = "<<vec.size()<<endl<<endl;

vec.pop_back();    //No need to specify the value becaue the compiler knoes what is the value at last index 








cout<<"Size after pop_back() = "<<vec.size()<<endl<<endl;
cout<<"Push_Back() After Using for each loop:"<<endl;
  for(int i: vec)
  {
    cout<<i<<endl;
  }





//front()
cout<<endl<<"The value using front():"<<vec.front()<<endl;
cout<<endl<<"The value using back():"<<vec.back()<<endl;


    return 0;
}
