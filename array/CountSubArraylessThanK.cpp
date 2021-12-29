#include<bits/stdc++.h>
using namespace std;

int countSubLessThanK(vector<int>&arr,int k)
{
/*
arr={ 1, 2, 3, 4 }
k=10
1.currProd :1 si:0 ei:0 k:10 arr[ei]:1
count :1 len :1
3.currProd :1 si:0 ei:0 k:10 arr[ei]:1
1.currProd :1 si:0 ei:1 k:10 arr[ei]:2
count :3 len :2
3.currProd :2 si:0 ei:1 k:10 arr[ei]:2
1.currProd :2 si:0 ei:2 k:10 arr[ei]:3
count :6 len :3
3.currProd :6 si:0 ei:2 k:10 arr[ei]:3
1.currProd :6 si:0 ei:3 k:10 arr[ei]:4
2.currProd :24 si:1 ei:3 k:10 arr[ei]:4
2.currProd :12 si:2 ei:3 k:10 arr[ei]:4
2.currProd :4 si:3 ei:3 k:10 arr[ei]:4
count :7 len :1
3.currProd :4 si:3 ei:3 k:10 arr[ei]:4
7

*/
    int n=arr.size();
    //int si=0,ei=0;
    int currProd=1;
    int count=0;
    for(int si=0,ei=0;ei<n;ei++)
    {
        cout<<"1.currProd :"<<currProd<<" si:"<<si<<" ei:"<<ei<<" k:"<<k<<" arr[ei]:"<<arr[ei]<<" "<<endl;
        currProd*=arr[ei];
        while(si<ei && currProd>=k)
        {
            currProd=currProd/arr[si++];
            cout<<"2.currProd :"<<currProd<<" si:"<<si<<" ei:"<<ei<<" k:"<<k<<" arr[ei]:"<<arr[ei]<<" "<<endl;
        }
        if(currProd<k)
        {
            int len=ei-si+1;
            count+=len;
            cout<<"count :"<<count<<" len :"<<len<<endl;
        }
        cout<<"3.currProd :"<<currProd<<" si:"<<si<<" ei:"<<ei<<" k:"<<k<<" arr[ei]:"<<arr[ei]<<" "<<endl;
       // ei++;
    }
    return count;
}

int main()
{
    vector<int>a={ 1, 2, 3, 4 };
    int k=10;
    int ans=countSubLessThanK(a,k);
    cout<<ans<<endl;
    return 0;
}