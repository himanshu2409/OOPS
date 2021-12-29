#include<bits/stdc++.h>
using namespace std;
int countSwap(string str)
{
    int n=str.length();
    
    int count=0;
    for(int i=0;i<n/2;i++)
    {
        int left=i,right=n-left-1;
        while(left<right)
        {
            if(str[left]==str[right])
            {
                break;
            }
            else{
                right--;
            }
        }
        if(left==right)
        {
            return -1;
        }
        for(int j=right;j<n-left-1;j++)
        {
            swap(str[j],str[j+1]);
            count++;
        }
    }
    return count;
}
int main()
{
    string s = "geeksfgeeks";
  
    // Function calling
    int ans1 = countSwap(s);
  
    reverse(s.begin(), s.end());
    int ans2 = countSwap(s);
  
    cout << max(ans1, ans2);
  
    return 0;
}