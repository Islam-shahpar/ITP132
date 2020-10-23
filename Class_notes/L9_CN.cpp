#include <iostream>
using namespace std;

// int sum(){
//   int result = 0;
//   return result;
// }

void display(){
  cout << "Please provide a number : " << endl;
}

void displayInput(int firstNum = 0, int secondNum = 0){
  //int firstNum = 0;
  cout << "Your first input is: " << firstNum << endl;
  cout << "Your second input is: " << secondNum << endl;  
}

void manipulateVariable(int &manipulate){
  cout << "Provide a value to mainpulate variable : " << endl;
  cin >> manipulate;//31
}

void manipulateVariable(int &manipulate, int &manipulate2){
  cout << "Provide a value to mainpulate variable : " << endl;
  cin >> manipulate;//19

  cout << "Provide a value to mainpulate variable2 : " << endl;
  cin >> manipulate2;//20
}

void displayHello();

int main(){
  display();
  int firstNum = 0;
  cin >> firstNum;//21
   

  display();
  int secondNum = 0;
  cin >> secondNum;//22

  //displayInput();

  manipulateVariable(firstNum);//reference of ristNum
  cout << "After the manipulation: " << firstNum << endl;//31
  cout << "After the manipulation of variable2: " << secondNum << endl;//22
  
}

void displayHello(){
  cout << "Hello World!" << endl;
}