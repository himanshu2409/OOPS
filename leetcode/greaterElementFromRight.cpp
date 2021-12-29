#include<bits/stdc++.h>
using namespace std;

vector<int>nextGreater(vector<int>nums1,vector<int>nums2)
{
    vector<int>ans;
    unordered_map<int,int>mp;
    stack<int>st;
    for(int n:nums2)
    {
        while(st.size()>0 && st.top()<n)
        {
            mp[st.top()]=n;
            st.pop();
        }
        st.push(n);
    }
    for(int n:nums1)
    {
        ans.emplace_back(mp.count(n)?mp[n]:-1);
    }
    return ans;
}

int main()
{
    vector<int>a={4,1,2};
    vector<int>b={1,3,4,2};
    vector<int>ans=nextGreater(a,b);
    for(int p:ans)
    {
        cout<<p<<" ";
    }
    return 0;
}