#include<bits/stdc++.h>
using namespace std;

void countFrequency(int arr[],int n)
{
	int freq[10001]={0};
	
	for(int i=0;i<n;i++)
	{
		freq[arr[i]-1]++;
	}
	for(int i=0;i<=n;i++)
	{
		cout<<(i+1)<<" "<<freq[i]<<endl;;
	}
}
int main()
{
    int arr[] = {2, 3, 3, 2, 5};
    countFrequency(arr, sizeof(arr)/ sizeof(arr[0]));
 
    int arr1[] = {1};
    countFrequency(arr1, sizeof(arr1)/ sizeof(arr1[0]));
 
    int arr3[] = {4, 4, 4, 4};
    countFrequency(arr3, sizeof(arr3)/ sizeof(arr3[0]));
 
    int arr2[] = {1, 3, 5, 7, 9, 1, 3, 5, 7, 9, 1};
    countFrequency(arr2, sizeof(arr2)/ sizeof(arr2[0]));
 
    int arr4[] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    countFrequency(arr4, sizeof(arr4)/ sizeof(arr4[0]));
 
    int arr5[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    countFrequency(arr5, sizeof(arr5)/ sizeof(arr5[0]));
 
    int arr6[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    countFrequency(arr6, sizeof(arr6)/ sizeof(arr6[0]));
 
    return 0;
}