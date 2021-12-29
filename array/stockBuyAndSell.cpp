#include<bits/stdc++.h>
using namespace std;


// int BuyAndSell(int arr[],int n)
// {
//     int maxProfit=0;
//     int minSoFar=arr[0];
//     int profit;
//     for(int i=0;i<n;i++)
//     {
//         minSoFar=min(minSoFar,arr[i]);
//         int profit=arr[i]-minSoFar;
//         maxProfit=max(maxProfit,profit);
//     }
//     return maxProfit;
// }


int BuyAndSell(int a[],int n){
int sum=0, maxProfit=0;
for(int i=0; i<n-1; i++)
{
sum+=a[i+1]-a[i];
if(sum>maxProfit) 
maxProfit = sum;
if(sum<0) 
sum=0;
}
return maxProfit; 
}
int main()
{
    int prices[] = { 100, 180, 260, 310, 40, 535, 695 };
    int n = sizeof(prices) / sizeof(prices[0]);
    vector<int>ans=NGE(prices, n);
    for(auto &rv:ans)
    cout<<rv<<endl;
    return 0;
}