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
    int arr[10]={0};
    int sum=0;
    
    for(int i=0;i<10;i++)
    {
        cin>>arr[i]; 
        sum=sum+arr[i];
    }
    
    cout<<"The sum of elements of array is"<<endl;
    cout<<sum<<endl;
    return 0;
}