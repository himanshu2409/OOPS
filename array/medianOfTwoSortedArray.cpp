#include<bits/stdc++.h>
using namespace std;

double mergeTwoSortedArray(vector<int>&nums1,vector<int>&nums2)
{
     int n=nums1.size(), m=nums2.size();
        int i=0,j=0,k=0;
        int x=0, y=0;
        while(i<=((n+m)/2))
        {
            if(k>=m || (j<n && nums1[j]<nums2[k]))
            {
                y=x;
                x=nums1[j++];
                cout<<"1. i ="<<i<<" j="<<j<<" k="<<k<<" x="<<x<<" y="<<y<<" n="<<n<<" m="<<m<<" nums1[i] ="<<nums1[i]<<" nums2[j]= "<<nums2[j]<<endl;
            }
            else
            {
                y=x;
                x=nums2[k++];
                  cout<<"2. i ="<<i<<" j="<<j<<" k="<<k<<" x="<<x<<" y="<<y<<" n="<<n<<" m="<<m<<" nums1[i] ="<<nums1[i]<<" nums2[j]= "<<nums2[j]<<endl;
            }
            i++;
              cout<<"3. i ="<<i<<" j="<<j<<" k="<<k<<" x="<<x<<" y="<<y<<" n="<<n<<" m="<<m<<" nums1[i] ="<<nums1[i]<<" nums2[j]= "<<nums2[j]<<endl;
        }
        if((n+m)%2==0)
            return (double)(x+y)/2;
        return (double)x;
}

int main()
{
    vector<int>a={10,30,39,78,101,201,2009};
    vector<int>b={8,9,11,17,18,20,23};
    int n=a.size();
    int m=b.size();
    double ans=mergeTwoSortedArray(a,b);
    cout<<ans<<endl;
    return 0;
}