#include<iostream>
using namespace std;

class A{
    public:
    int a;
    void f1()
    {
        cout<<"f1 of class A"<<endl;
    }
};
class B1: virtual public A{
    public:
    int b1;
    void f2()
    {
        cout<<"f2 of class B1"<<endl;
    }
};
class B2:virtual public A{
    public:
    int b2;
    void f3()
    {
        cout<<"f3 of class B2"<<endl;
    }
};
class C:public B1,public B2
{
    public:
    int C;
    void f4()
    {
        cout<<"f4 of class C"<<endl;
    }
};
int main()
{
    C obj;
    obj.f4();
    obj.f3();
    obj.f2();
    obj.f1();
    cout<<"Size of obj= "<<sizeof(obj)<<endl;
    cout<<"Size of A= "<<sizeof(A)<<endl;
    cout<<"Size of B1= "<<sizeof(B1)<<endl;
    cout<<"Size of B2= "<<sizeof(B2)<<endl;
    cout<<"Size of C= "<<sizeof(C)<<endl;
    return 0;
}

/*
Output without virtual
diamondProblem.cpp:43:9: error: request for member 'f1' is ambiguous
     obj.f1();
         ^~
diamondProblem.cpp:7:10: note: candidates are: void A::f1()
     void f1()
          ^~
diamondProblem.cpp:7:10: note:                 void A::f1()

Output with virtual keyword
f4 of class C
f3 of class B2
f2 of class B1
f1 of class A
Size of obj= 24
Size of A= 4
Size of B1= 12
Size of B2= 12
Size of C= 24

*/