/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

// function prototype
void reverse(const string& a);

int main() {
  string str;

  cout << " Please enter a string " << endl;
  getline(cin, str);
    
  // function call
  reverse(str);

  return 0;    
}

// function definition
void reverse(const string& str) {

  // store the size of the string
  size_t numOfChars = str.size();

  if(numOfChars == 1) {
    cout << str << endl;
  }
  else {
    cout << str[numOfChars - 1];

    // function recursion
    reverse(str.substr(0, numOfChars - 1));
  }
}