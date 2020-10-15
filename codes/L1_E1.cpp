/**
Lecture 1 :          C++ Basic     
Example :            Basic Skeleton of C++
Problem Statement :  Create a C++ program that displays "Hello World!"
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
using namespace std;

int main(){
  cout << "Hello World!" << endl;
  return 0;
}

/*
#include    : A way of including a standard or user-defined file in the program 
              and is mostly written at the beginning of any C/C++ program.
<iostream>  : This is a class that defines Standard Input / Output streams library
              typedef basic_iostream<char> iostream; http://www.cplusplus.com/reference/iolibrary/
              Syntax for typedef: typedef existing_type new_name; https://www.w3adda.com/c-tutorial/c-typedef
using       : It's used to bring a specific member from the namespace into the current scope
namespace   : A namespace is a declarative region that provides a scope to the identifiers 
              (names of the types, function, variables etc) inside it.
std         : "std" is a namespace. Inside of std; cin, cout, cerr objects are declared using iostream class template.
main()      : The execution of all C++ programs begins with the main function, it is the function called when the program runs.
*/