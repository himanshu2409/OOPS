#include<bits/stdc++.h>
using namespace std;

char repeatingCharacter(char *str)
{
    int i,len=strlen(str);
    int count[256]={0},index=-1;
    for(int i=0;i<256;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<len;i++)
    {
        if(count[str[i]]==0)// 1<--- - Repeating case and 0 <--- Non Repeating case
        {
           count[str[i]]++;
           index=i;
            break;
        }
    }
    if(i==len)
    {
        cout<<"No repeating character"<<endl;
    }
    else{
        cout<<str[index]<<endl;
    }
    return 0;
}
int main()
{
    char str[16]="abzddab";
    cout<<repeatingCharacter(str)<<endl;
    return 0;
}