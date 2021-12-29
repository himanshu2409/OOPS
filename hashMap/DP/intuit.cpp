#include<bits/stdc++.h>

using namespace std;


// 
 int csp_tab(int n) 
 {
		int dp[n+1]; 
		dp[0] = 1;
		dp[1] = 1;
		dp[2] = 2;
		for (int i = 3; i <= n; i++)
         {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		return dp[n];
}
int main()
{
     int arr[] = { 1,1,0,1};
        int n = 4;
        cout<<"print :"<<csp_tab(n);
        return 0;
}