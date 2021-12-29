#include<bits/stdc++.h>
using namespace std;

class code{
    int id;

    public:
    code(){}
    code(int a){ id=a; }
    code(code &x)
    {
        id=x.id;
    }
    void display(void)
    {
        cout<<id;
    }
};

int main()
{
    code A(100);
    code B(A);  //copy constructor
    code C=A;   //copy constructor called again

    code D(200);
    code E(D);

    cout<<"\n id of A:";    A.display();
    cout<<"\n id of B:";    B.display();
    cout<<"\n id of C:";    C.display();
    cout<<"\n id of D:";    D.display();
    cout<<"\n id of E:";    E.display();
    return 0;
}