/**
Lecture 7 :          Repeatation Structure
Example :            For loop 
Problem Statement :  Write a C++ program that sums from 1 to 100
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  
  for (int number = 1; number <= 100; ++number){
    sum = sum + number;
  }  

  cout << "Total sum : " << sum << endl;

  return 0;
}

