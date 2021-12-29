#include<iostream>
using namespace std;

class code{
 int id;
 public:
    code()
    {
        cout<<"Default constructor"<<endl;
    }
    code(int a)
    {
        cout<<"Parameterized Constructor with single arguments"<<endl;
        id=a;
    }
    code(code &x)
    {
        cout<<"Copy Constructor with single object arguments"<<endl;
        id=x.id;
    }
    void display()
    {
        cout<<"Display function"<<endl;
        cout<<"id= "<<id<<endl;
    }
};

int main()
{
    code A(100);
    code B(A);
    code C=A;
    code D;   //D is created, not initialised
    D=A;  //copy constructor not called
    cout<<"\n id of A =";   A.display();
    cout<<"\n id of B =";   B.display();
    cout<<"\n id of C =";   C.display();
    cout<<"\n id of D =";   D.display();
    return 0;
}

// Output:
// Parameterized Constructor with single arguments
// Copy Constructor with single object arguments
// Copy Constructor with single object arguments
// Default constructor

//  id of A =Display function
// id= 100

//  id of B =Display function
// id= 100

//  id of C =Display function
// id= 100

//  id of D =Display function
// id= 100