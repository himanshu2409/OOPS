#include<bits/stdc++.h>
using namespace std;
int kadaneAlgo(int nums[],int n)
{
    int max_so_far=INT_MIN,max_end_so_far=1,min_end_so_far=1;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>0)
        {
           max_end_so_far=max_end_so_far*nums[i];
           min_end_so_far=min(min_end_so_far*nums[i],1);  
            flag=1;
        }
        else if(nums[i]==0)
        {
            max_end_so_far=1;
            min_end_so_far=1;
        }
        else
        {
            int temp=max_end_so_far;
            max_end_so_far=max(min_end_so_far*nums[i],1);
            min_end_so_far=temp*nums[i];
        }
        if(max_so_far<max_end_so_far)
            max_so_far=max_end_so_far;
    }
     if(flag==0 && max_so_far==0)
            return 0;
    return max_so_far;
}

int main() {
   int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int max_sum = kadaneAlgo(nums, n);
    cout<< max_sum;
    return 0;
}