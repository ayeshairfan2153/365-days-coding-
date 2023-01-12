/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;



int main()
{
    int num1=0;
    int num2=1;
    int successive=0;
    int n=0;
    cout<<"Enter the positive number n"<<endl;
    cin>>n;
    cout<<"The fibonacci series is:"<<endl;
    cout<<num1<<" "<<num2<<" ";
    successive=num1+num2;
    
    while(successive<=n)
    {
        cout<<successive<<" ";
        num1=num2;
        num2=successive;
        successive=num1+num2;
    }
    cout<<endl;
    
    return 0;
}