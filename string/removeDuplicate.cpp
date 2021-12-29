#include<bits/stdc++.h>
using namespace std;

char *removeDup(char str[],int n)
{
    set<char>s (str, str+n-1);
    int i=0;
    for(auto c:s)
    {
        str[i++]=c;
    }
    str[i]='\0';
    return str;
}
int main()
{
char str[]= "geeksforgeeks";
   int n = sizeof(str) / sizeof(str[0]);
   cout << removeDup(str, n);
   return 0;
}