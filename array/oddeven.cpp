#include<bits/stdc++.h>
using namespace std;


int oddeven(int arr[],int n)
{
    int si=0;
    int ei=n-1;
    int sum=arr[si]+arr[ei];
    int mid=n/2;
    int val=-1;
    int count=0;
    while(si<ei)
    {
        if(n%2!=0)
        {
            val=sum-arr[mid];
        }
        else
        {
            count++;
        }
        si++;
        ei--;
    }
    return val;
}
int main()
{
    int arr[]={1,3,5,9,11};
    int n=5;
    int ans=oddeven(arr,n);
    cout<<ans<<endl;
    return 0;
}