#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) 
{
        int max_so_far = INT_MIN, max_ending_here = 0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            max_ending_here+=nums[i];
            if(max_so_far<max_ending_here)
                max_so_far=max_ending_here;
            if(max_ending_here<0)
                max_ending_here=0;
        }
        return max_so_far;
}

int main()
{
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    int ans=maxSubArray(arr);
    cout<<ans<<endl;
    return 0;
}