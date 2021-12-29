#include<bits/stdc++.h>
using namespace std;



int maxNumberOfBalloons(string text) 
{
    //    unordered_map<int,int>mp;
    //    for(const char &x:text)
    //    {
    //        mp[x]++;
    //    }
    //    return min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
    int freq[26];
        for(int i=0;i<26;i++)
        {
            freq[i]=0;
        }
       for(char c:text)
       {
           freq[c-'a']++;
       }
       int freql=freq['l'-'a']=freq['l'-'a']/2;
       int freqo=freq['o'-'a']=freq['o'-'a']/2;
        int freqb=freq['b'-'a'];
        int freqa=freq['a'-'a'];
        int freqn=freq['n'-'a'];
        
       return min({freqa,freqb,freqo,freql,freqn});
}

int main()
{
    string text="nlaebolko";
    cout<<maxNumberOfBalloons(text)<<endl;
    return 0;
}
