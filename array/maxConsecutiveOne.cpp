#include<bits/stdc++.h>
using namespace std;

int countOne(vector<int>&nums)
{
    int n=nums.size();
    int count=0,result=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            count=0;
        }
        else{
            count++;
            result=max(result,count);
        }
    }
    return result;
}
int main()
{
    vector<int>arr={1,1,0,1,1,1};
    int ans=countOne(arr);
    cout<<ans<<endl;
    return 0;
}