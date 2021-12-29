#include<iostream>
using namespace std;

class complex{
    float x,y;
    public:
        complex()
        {
            cout<<"Default Constructor"<<endl;
        }
        complex(float a)
        {
            cout<<"Parameterised Single argument constructor"<<endl;
            x=y=a;
        }
        complex(float real,float imag)
        {
            cout<<"Parameterised Double argument constructor"<<endl;
            x=real;
            y=imag;
        }

        friend complex sum(complex,complex);
        friend void show(complex);
};
complex sum(complex c1,complex c2)
{
    cout<<"Parameterised Sum double argument constructor"<<endl;
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}
void show(complex c)
{
    cout<<"Show function Parameterised Single argument constructor"<<endl;
    cout<<c.x<<" +j "<<c.y<<endl;
}
int main()
{
    complex A(2.7,3.5); //define & initialize
    complex B(1.6);
    complex C;
    C=sum(A,B);
    cout<<"A= ";show(A);
    cout<<"B= ";show(B);
    cout<<"C= ";show(C);
    complex P,Q,R;
    P=complex(2.5,3.9);
    Q=complex(1.6,2.5);
    R=sum(P,Q);
    cout<<endl;
    cout<<"P= ";show(P);
    cout<<"Q= ";show(Q);
    cout<<"R= ";show(R);
    return 0;
}
// Output:
// Parameterised Double argument constructor
// Parameterised Single argument constructor
// Default Constructor
// Parameterised Sum double argument constructor
// Default Constructor
// A= Show function Parameterised Single argument constructor
// 2.7 +j 3.5
// B= Show function Parameterised Single argument constructor
// 1.6 +j 1.6
// C= Show function Parameterised Single argument constructor
// 4.3 +j 5.1
// Default Constructor
// Default Constructor
// Default Constructor
// Parameterised Double argument constructor
// Parameterised Double argument constructor
// Parameterised Sum double argument constructor
// Default Constructor

// P= Show function Parameterised Single argument constructor
// 2.5 +j 3.9
// Q= Show function Parameterised Single argument constructor
// 1.6 +j 2.5
// R= Show function Parameterised Single argument constructor
// 4.1 +j 6.4