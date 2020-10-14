/**
Lecture 8 :          Nested Repeatation Structure
Example :            Nested for loop 
Problem Statement :  Write a C++ program that calculates the depriciation of a car
                     At the end of each of 5 years, using 15%, 20%, 25% annual depriciation rate
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
using namespace std;

int main() {
  double originalValue = 0.0;
  double depriciation = 0.0;
  double currentValue = 0.0;

  cout << "Original value: " << endl;
  cin >> originalValue;
  
  for(double rate = 0.15; rate < .26; rate += 0.05){
    cout << "Depriciation rate: " << rate*100 << endl;
    cout << "Value after year: " << endl;

    currentValue = originalValue;
    for(int year = 1; year < 6; year++){
      depriciation = currentValue*.15;
      currentValue = currentValue-depriciation;
      cout << year << " $" << currentValue << endl;
    }  
  }

  return 0;
}

