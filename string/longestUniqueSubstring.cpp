#include<bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) 
{ 
    int ans=0;
    int n=s.length();
    map<char,int>freq;
    int start=0;
    for(int end=0;end<n;end++)
    {
        if(freq.find(s[end])!=freq.end())
        {
            cout<<"1. ans "<<ans<<"start ="<<start<<"end ="<<end<<" string "<<s[end]<<endl;
            start=max(start,freq[s[end]]+1);
        }
        //cout<<"2. ans "<<ans<<"start ="<<start<<"end ="<<end<<" string "<<s[end]<<endl;
        freq[s[end]]=end;
        cout<<"3. ans "<<ans<<"start ="<<start<<"end ="<<end<<" string "<<s[end]<<endl;
        ans=max(ans,end-start+1);
        cout<<"4. ans "<<ans<<"start ="<<start<<"end ="<<end<<" string "<<s[end]<<endl;
    }
    return ans;
}
int main()
{
     string s = "bbbbabbb";
     int ans=lengthOfLongestSubstring(s);
     cout<<ans<<endl;
     return 0;
}