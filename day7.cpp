/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[10]={78,56,12,3,89,34,13,41,1,11};
    
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            int tmp=0;
            if(arr[i]>arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
                
                
            }
        }
    }
    
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}