#include<iostream>
using namespace std;
int main(){
	
	int marks[5],i;
cout<<"Enter five subject marks one  by one "<<endl;
for(i=0;i<5;i++){
	cin>>marks[i];

}
cout<<"Your Subjects Marks are"<<endl;
for(i=0;i<5;i++)
cout<<marks[i]<<endl;	
return 0;
}
