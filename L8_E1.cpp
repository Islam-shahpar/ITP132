/**
Lecture 8 :          Nested Repeatation Structure
Example :            For loop 
Problem Statement :  Write a C++ program that calculates the depriciation of a car
                     At the end of each of 5 years, using 15% annual depriciation rate
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
#include <iomanip>
using namespace std;


//while-do loop
int main() {
  double originalValue = 0.0;
  double depriciation = 0.0;
  double currentValue = 0.0;

  cout << "Original value: " << endl;
  cin >> originalValue;
  cout << endl << fixed << setprecision(0);

  cout << "Depriciation rate: 15%" << endl;
  cout << "Value after year: " << endl;
  
  currentValue = originalValue;
  for(int year = 1; year < 6; year++){
      depriciation = currentValue*.15;
      currentValue = currentValue-depriciation;
      cout << year << " $" << currentValue << endl;
  }

  return 0;
}

