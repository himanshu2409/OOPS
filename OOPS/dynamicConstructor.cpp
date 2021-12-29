#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

class String{
    char *name;
    int length;
    public:
       String(const char *str=NULL);
       ~String()
       { 
           cout<<"\n Destructor called ";
           delete [] name; 
        }
       //String(const String&);
       void display()
       { 
           cout<<"\n Display function called ";
           cout<<name<<endl;
        }
       void change(const char *);
};

String::String(const char *str)
{
    cout<<"\n Parameterised constructor called with one const arguments ";
    length=strlen(str);
    name=new char[length+1];
    strcpy(name,str);
}
void String::change(const char *str)
{
    cout<<"\nChange function with one const arguments ";
    delete [] name;
    length = strlen(str);
    name = new char[length+1];
    strcpy(name, str);
}
// String:: String(const String& old_str)
// {
//     cout<<"\n Copy constructor String called for old_str";
//     length=old_str.length;
//     name=new char[length+1];
//     strcpy(name,old_str.name);
// }
int main()
{
     String str1("Himanshu");
     String str2 = str1;
 
    cout<<"\n display str1= "; str1.display(); // what is printed ?
    cout<<"\n display str2= "; str2.display();
 
    str2.change("Juhi");
 
    cout<<"\n display str1 after change "; str1.display(); // what is printed now ?
    cout<<"\n display str2 after change "; str2.display();
    return 0;
}

// Output=
//  Parameterised constructor called with one const arguments 
//  Copy constructor String called for old_str
//  display str1=
//  Display function called Himanshu

//  display str2=
//  Display function called Himanshu

// Change function with one const arguments
//  display str1 after change
//  Display function calledHimanshu

//  display str2 after change
//  Display function called Juhi

//  Destructor called
//  Destructor called