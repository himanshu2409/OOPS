#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[]="\n C++ is better than C";
    int len=strlen(str);
    char *substr=new char[len];
    cin>>substr;
    int k,i;
    int len2=strlen(substr);
    for(i=0;i<len;i++)
    {
        k=i;
        for(int j=0;j<len2;j++)
        {
            if(str[k]==substr[j])
            {
                if(j==len2-1)
                {
                    cout<<"\n The substring is present in the main string";
                    exit(0);
                }
                k++;
            }
            else
            break;
        }
    }
    if(i==len)
      cout<<"\n The substring is not present in the main string";
      return 0;
}