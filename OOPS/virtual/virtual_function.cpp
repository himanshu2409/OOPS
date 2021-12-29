#include<iostream>
using namespace std;
//Example 1
// class A{

//     public:
//    virtual void f1()
//     {
//         cout<<"F1 of class A";
//     }
// };
// class B: public A
// {
//     public:
//     void f1()
//     {
//          cout<<"F1 of class B";
//     }
//      void f2()
//     {
//          cout<<"F2 of class B";
//     }
// };

//Example 2

class A{
    public:
    void f1()
    {
         cout<<"F1 of class A"<<endl;
    }
    virtual void f2()
    {
        cout<<"F2 virtual of class A"<<endl;
    }
    virtual void f3()
    {
        cout<<"F3 virtual of class A"<<endl;
    }
     virtual void f4()
    {
        cout<<"F4 virtual of class A"<<endl;
    }
};
class B: public A
{
    public:
    void f1()
    {
         cout<<"F1 of class B"<<endl;
    }
    void f2()
    {
        cout<<"F2 of class B"<<endl;
    }
     void f4()
    {
        cout<<"F4 of class B"<<endl;
    }
};

int main()
{
    A *p;
    B O2;
    p=&O2;
    p->f1();
    p->f2();
    p->f3();
    p->f4();
   // p->f4(5);
    return 0;
}

/*
Example 1 output
Output without virtual 
F1 of class A

Output with virtual function
F1 of class B

Example 2 output
without object B:-
F1 of class A
F2 virtual of class A
F3 virtual of class A
F4 virtual of class A

with object B:-
F1 of class A
F2 of class B
F3 virtual of class A
F4 virtual of class A
*/