#include<iostream>
using namespace std;


class complex
{

   int real,imaginary;

   public:
     void getData()
     {
        cout<<"The real part is: "<<real<<endl;
        cout<<"The imaginary part is: "<<imaginary<<endl;
     }

     void setData(int real, int imaginary)
     {

        //Here without using this keyword the output will show the garbage values
        this->real=real;
        this->imaginary=imaginary;
     }
};





int main()
{

    /*complex c1;
    c1.setData(1,50);
    c1.getData();
    complex *ptr= &c1;
    cout<<ptr<<endl;
    cout<<&c1<<endl;
    cout<<&ptr<<endl;
    */

    
    /*hm object ki value access krne k ly cout<<*ptr; nhi kr skty asa is liye q k jb hm normal pointer se dereferencing krty hain tb pointer jis variable
    ko point out krta ha us mn koi na koi value hti hai lkn object ki hmne dereferencing krni pointer k through to us k ly  (*ptr).a; krna prega
    jse normaly agar a=10; hai or *ptr =&a; hai  to   cout<<a; or cout<<*ptr; dono same results dnge
    Same Issi trah      (*ptr).a;   ya phr  c1.a;  ne bhi same result dena hai 
     */
    




    /* The different way of making the new object using new keyword */
    complex *ptr = new complex();
    (*ptr).setData(1,50);  //Bracket lgana is ly zrori ha q k . operator ki precedence * se zyda ha
    (*ptr).getData();





/*------------------------Arrow operator:  Iski help se hm directly ek pointer ko dereference kr k uska function run kar skty hain
--------------------------Arrow ka mtlb bhi yhi hta ha k is pointer ko dereference kro or uska data run kro
--------------------------The below code worsk exactly same as (*ptr).setData(1,50); 
-------------------------- ptr->setData(1,50);  iska mtlb hai ptr js object ko point kr rha hai uska setData()*/
  ptr->setData(1,50); 
  ptr->getData();
















/*-------------------------------------------Array of Objects----------------------------------------*/
complex *ptr1=new complex[4];
  ptr1->setData(1,4); 
  ptr1->getData();


  //Will cover this concept later 
  
    return 0;
}