/**
Lecture :            11
Example :            1D Array 
Problem Statement :  Different operation regarding array
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
using namespace std;


int main(){
  
  //declare an array
  int newArray[5] = {100,101,102,103,104};

  //enter data
  int anotherArray[5];
  anotherArray[0] = 100;
  anotherArray[1] = 101;
  anotherArray[2] = 102;
  anotherArray[3] = 103;
  anotherArray[4] = 104;

  //Display data
  for (int i = 0; i < 5; i++){
      cout << newArray[i] << endl;
  }
  
  return 0;
}