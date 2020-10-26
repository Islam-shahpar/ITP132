/**
Lecture 7 :          Repeatation Structure
Example :            do-while loop 
Problem Statement :  Write a C++ program that sums from 1 to 100
Language :           C++
Coder :              Shahpar Islam
Run :                g++ L7_E3.cpp -o myFile && ./myFile
*/

#include <iostream>
using namespace std;


//while-do loop
int main() {
  int sum = 0;
  int number = 1;
  
  do{
      sum = sum + number;
      ++number;
  } while (number <= 100);

  cout << "Total sum : " << sum << endl;

  return 0;
}