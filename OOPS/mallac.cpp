#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{

 int n;   
 cin>>n;
 int *ptr=(int*)malloc(n*sizeof(int));
 if (ptr == NULL) 
 {
        printf("Memory not allocated.\n");
        exit(0);
}
else
{
    printf("Memory successfully allocated using malloc.\n");
 
        // Get the elements of the array
        for (int i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (int i = 0; i < n; ++i) 
        {
            cout<<ptr[i];
        }
}
return 0;
}