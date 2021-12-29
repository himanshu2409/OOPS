#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
        int result = 0;
        int buy=0,sell=0,profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i+1]<prices[i])
            {
                buy=prices[i+1];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(prices[i+1]>prices[i])
            {
                sell=prices[i+1];
            }
        }
        cout<<"Buy = "<<buy<<" sell= "<<sell<<endl;
        
    }

    int main()
    {
        vector<int> prices = {7,1,5,3,6,4};
        int ans=maxProfit(prices);
        cout<<ans<<endl;
        return 0;
    }
