#include<bits/stdc++.h>
using namespace std;

bool check123(int number)
{
    string str=to_string(number);
    int count1=0,count2=0,count3=0;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='1')
        {
            count1++;
        }
        else if(str[i]=='2')
        {
            count2++;
        }
        else if(str[i]=='3')
        {
            count3++;
        }
    }    
    return (count1 && count2 && count3 );

}
string printNumber(int number[],int n)
{
    vector<int>num;

    for(int i=0;i<n;i++)
    {
        if(check123(number[i]))
        {
            num.push_back(number[i]);
        }
    }
    sort(num.begin(),num.end());
    string res="";
    for(auto x:num)
    {
        int value=x;
        if(res.length()>0)
        res+=",";
        res+=to_string(value);
    }
    return (res.length() > 0) ? res : "-1";
}
int main()
{
    int numbers[] = { 123, 1232, 456, 234, 32145 };
  
    int n = sizeof(numbers)/sizeof(numbers[0]);
      
    string result = printNumber(numbers, n);
    cout << result;
    return 0;
}