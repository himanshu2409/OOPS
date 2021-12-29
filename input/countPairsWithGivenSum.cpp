#include<bits/stdc++.h>
using namespace std;

int countFrequency(int arr[],int n,int sum)
{
    unordered_map<int,int>mp;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(sum-arr[i])!=mp.end())
        {
            count+=mp[sum-arr[i]];
            cout<<"\narr[i] , sum-arr[i] ="<<arr[i]<<" "<<(sum-arr[i]);
        }
        mp[arr[i]]++;
    }
    return count;
}

int main()
{
     int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is "
         << countFrequency(arr, n,sum);
    return 0;
}