#include<bits/stdc++.h>
using namespace std;

vector<int>subarraySum(vector<int>&nums,int k)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>ans;
    int n=nums.size();
    if(n==0)
    return ans;
    unordered_map<int,int>mp; //key=prefix:  , value=count of prefixSum
    int currSum=0;
    //int n=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        currSum+=nums[i];
        if(currSum==k)
            count++;
        if(mp.find(currSum-k)!=mp.end())
          ans.push_back(currSum-k);
            //count+=mp[currSum-k];
        mp[currSum-k]++;
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" "<<endl;
    }
    //return ans;
}

int main()
{
    vector<int>arr={3,4,7,2,-3,1,4,2};
    int sum=7;
    vector<int>ans=subarraySum(arr,sum);
    int n=ans.size();
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" "<<endl;
    return 0;
}