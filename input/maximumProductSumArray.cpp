#include<bits/stdc++.h>
using namespace std;

int maxProdSubArray(int arr[],int n)
{
    int max_end=arr[0];
    int min_end=arr[0];
    int omax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            max_end=1;
            min_end=1;
            continue;
        }
       
            int temp=max_end;
            max_end=max({arr[i],arr[i]*max_end,arr[i]*min_end});
            min_end=min({arr[i],arr[i]*temp,arr[i]*min_end});

            cout<<"\n temp --- max_end --- min_end = "<<temp<<" "<<max_end<<" "<<min_end;
        
        if(omax<max_end)
        omax=max_end;
    }
    return omax;
}
int main()
{
      int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Sub array product is "
         << maxProdSubArray(arr, n);
    return 0;
}