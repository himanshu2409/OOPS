#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x=123;
    while(x>0)
    {
        int dig=x%10;
        x=x/10;
        cout<<dig;
    }
    return 0;
}