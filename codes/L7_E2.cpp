/**
Lecture 7 :          Repeatation Structure
Example :            while-do loop 
Problem Statement :  Write a C++ program that sums from 1 to 100
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
using namespace std;


//while-do loop
int main() {
  int sum = 0;
  int number = 1;
  
  while(number <= 100){
      sum = sum + number;
      ++number;
  }

  cout << "Total sum : " << sum << endl;

  return 0;
}

