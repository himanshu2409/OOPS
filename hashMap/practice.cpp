#include <string.h>  
#include <iostream>  
#include <map>  
#include <utility>  
using namespace std; 

// int main()  
// {
//   // Initializing a map with integer keys
//   // and corresponding string values
//   map<int, string> Employees; 

//   //Inserting values in map using insert function
//   Employees.insert ( std::pair<int, string>(101,"Himanshu") );
//   Employees.insert ( std::pair<int, string>(103,"Shaurya") );
//   Employees.insert ( std::pair<int, string>(104,"Deepesh") );

//   // Inserting values using Array index notation
//   Employees[105] = "kunal";  
//   Employees[102] = "Ajay"; 
  
//   cout << "Size of the map is " << Employees.size() << endl << endl;  
//   map<int,string>::iterator iter;
//   // Printing values in the map
//   cout << endl << "Default Order of value in map:" << endl;  
//   for(iter=Employees.begin(); iter!=Employees.end(); ++iter)  
//   {  
//     cout << (*iter).first << ": " << (*iter).second << endl;  
//   }  
  
//   // Finding the value corresponding to the key '102'
//   std::map<int, string>::iterator it = Employees.find(102);
//   if (it != Employees.end()){
//     std::cout <<endl<< "Value of key = 102 => " << Employees.find(102)->second << '\n';
//   }
// }  

int main()
{
    map<int,int>mp;
    mp.insert(pair<int, int>(1, 40));
    mp.insert(pair<int, int>(2, 30));
    mp.insert(pair<int, int>(3, 60));
    mp.insert(pair<int, int>(4, 20));
    mp.insert(pair<int, int>(5, 50));
    mp.insert(pair<int, int>(6, 50));
    mp.insert(pair<int, int>(7, 10));
    map<int,int>::iterator itr;

    // for(itr=mp.begin;itr!=mp.end();itr++)
    // {
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }
     cout << endl;
  
    // assigning the elements from gquiz1 to gquiz2
    map<int, int> gquiz2(mp.begin(), mp.end());
  
    // print all elements of the map gquiz2
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
  
    // remove all elements up to
    // element with key=3 in gquiz2
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
  
    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
  
    cout << endl;
  
    // lower bound and upper bound for map gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << mp.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << mp.lower_bound(5)->second << endl;
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << mp.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << mp.upper_bound(5)->second << endl;
  
    return 0;
}