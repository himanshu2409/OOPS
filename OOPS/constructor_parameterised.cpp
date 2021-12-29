#include<bits/stdc++.h>
using namespace std;

class FD{
  long int p_amount;  
  int year;
  float rate;
  float r_value;
  public:
    FD(){}
    FD(long int p,int y,float r=0.12);
    FD(long int p,int y,int r);
    void display(void);
};

FD::FD(long int p,int y,float r)
{
    p_amount=p;
    year=y;
    rate=r;
    for(int i=1;i<=y;i++)
        r_value*=(1.0+r);
}
FD::FD(long int p,int y,int r)
{
    p_amount=p;
    year=y;
    rate=r;
    r_value=p_amount;
    for(int i=1;i<=y;i++)
        r_value*=(1.0+float(r)/100);
}
void FD:: display(void)
{
    cout<<"\n"<<"Principal Amount= "<<p_amount<<"\n"
            <<"Return Value= "<<r_value<<"\n";
}
int main()
{
    FD fd1,fd2,fd3;
    long int p;
    int y;
    float r;
    int R;
    cout<<"Enter amount period , interest rate"<<endl;
    cin>>p>>y>>r;
    fd1=FD(p,y,r);
    cout<<"Enter amount period , interest rate"<<endl;
    cin>>p>>y>>r;
    fd2=FD(p,y);
    cout<<"Enter amount period "<<endl;
    cin>>p>>y;
    fd3=FD(p,y);
    cout<<"deposit 1"<<endl;
    fd1.display();
     cout<<"deposit 2"<<endl;
    fd2.display();
     cout<<"deposit 3"<<endl;
    fd3.display();
return 0;
}