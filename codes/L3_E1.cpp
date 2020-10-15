/**
Lecture 3 :          Variable Declaration
Example :            Declare variable
Problem Statement :  Write a C++ that Sign up user for a website
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
#include <string>//include string header to use getline()
using namespace std;

int main(){

  string fullName = "";
  int age = 0;
  bool isMale = 'true';
  double verifyUser;
  double conditionValue = 8.3;
  
  cout << "Please enter your full name: " << endl;
  getline(cin,fullName); //To take a string input use getline(cin, variable_name)
  cout << "Please enter your age: " << endl;
  cin >> age;
  cout << "What is 4.5 + 3.8? " << endl;
  cin >> verifyUser;
  cout << "Are you male? [true/false]" << endl;
  cin >> isMale;

  if(verifyUser == conditionValue){
    cout << "Thanks " << fullName << " for signing up!" << endl;
  }else {
    cout << "Sorry " << fullName << " we couldn't verify you!" << endl;
  }

  return 0;
}