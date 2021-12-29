#include<bits/stdc++.h>
using namespace std;

string breakPalindrome(string palindrome) 
{
    int n=palindrome.length();
    for(int i=0;i<n/2;i++)
    {
        if(palindrome[i]!='a')
        {
            palindrome[i]='a';
            return palindrome;
        }
    }
    if (palindrome.length() >= 2) 
    {
            palindrome.back() = 'b';
            return palindrome;
    }
    return "";
}

int main()
{
    string pal = "abccba";
    string ans=breakPalindrome(pal);
    cout<<ans<<endl;
    return 0;
}