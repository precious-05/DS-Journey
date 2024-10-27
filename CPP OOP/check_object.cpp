#include<iostream>
using namespace std;


class Test
{
    public:
    int a;
};



int main()
{



    
        Test *t1 = new Test();
        t1->a=10;
        cout<<t1<<endl;
        cout<<&t1<<endl;
        cout<<t1->a<<endl;
    
}