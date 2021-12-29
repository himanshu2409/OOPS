#include<bits/stdc++.h>
using namespace std;


string reverseWords(string str) 
    {
       string s = "";
        string currWord = "";
        int flag = 0;
        for(char c: str){
            if(c==' '){
                if(flag && currWord.size()){
                    cout<<"1. flag "<<flag<<" cw "<<currWord<<" size "<<currWord.size()<<endl;
                    s.push_back(' ');
                }
                if(flag==0 && currWord.size())
                 cout<<"2. flag "<<flag<<" cw "<<currWord<<" size "<<currWord.size()<<endl;
                 flag = 1;
                s += currWord;
                currWord = "";
            }
            else currWord.push_back(c);
        }
        if(flag && currWord.size()){
             cout<<"3. flag "<<flag<<" cw "<<currWord<<" size "<<currWord.size()<<endl;
            s.push_back(' ');
        }
        s += currWord;
        
        reverse(s.begin(), s.end());
        int start = -1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && start!=-1){
                cout<<" start "<<start<<" string s "<<s<<endl;
                reverse(s.begin() + start, s.begin() + i);
                start = -1;
            }
            else if(s[i]!=' ' && start==-1) start=i;
        }
        if(start!=-1) reverse(s.begin() + start, s.end());
        return s;
    }

int main()
{
    string str="  hello world  ";
    string ans=reverseWords(str);
    cout<<ans<<endl;
    return 0;
}