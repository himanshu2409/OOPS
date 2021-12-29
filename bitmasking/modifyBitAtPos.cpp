#include<bits/stdc++.h>
using namespace std;
int modifyBit(int n,int p,int b)
{
    int mask=1<<p; // 2^p
    return ((n&~mask)|(b<<p));
}

int main()
{
    cout << modifyBit(6, 2, 0) << endl;
    cout << modifyBit(6, 5, 1) << endl;
    return 0;
}