#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>result(temperatures.size());
        stack<int>st;

        for(int i=0;i<temperatures.size();i++)
        {
            while(!st.empty() && temperatures[st.top()]<temperatures[i])
            {
                auto idx=st.top();
                st.pop();
                result[idx]=i-idx;
                cout<<"\n idx , value ="<<idx<<" "<<result[idx];
            }
            st.emplace(i);
        }
return result;
}

int main()
{
    vector<int>arr={73,74,75,71,69,72,76,73};
    vector<int>ans=dailyTemperatures(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
    