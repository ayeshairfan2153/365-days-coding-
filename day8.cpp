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
    int number=1;
    cout<<"Enter a positive integer greater than 0"<<endl;
    cin>>number;
    for(int i=1;i<=10;i++)
    {
        cout<<number<<"*"<<i<<"="<<number*i<<endl;
    }

    return 0;
}