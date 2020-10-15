/**
Lecture 2 :          Input|Output|Comment             
Problem Statement :  Write a C++ program that does the I/O operation
                     Use comment to clarify the operations
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
using namespace std;

int main(){

  cout << "Do you like C++? [Y/N]" << endl; //use "cout" to display output
  char answer; //Declare a variable and store the user input in it
  cin >> answer; //use "cin" to get user input
  cout << "User replied: " << answer << endl;
  //This is a single line comment
  /*
    This is a multi-line comment
   */
  return 0;
}