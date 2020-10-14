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

// int main(){
//   int sum = 0;
//   string anything = "";
//   cout << "Please provide your country name: " << endl;
//   cin >> anything;

//   cout << "The length of anything is : " << anything.length() << endl;

//   for(int i = anything.length()-1; i > 0; i/=2){
//     cout << "Value of index " << i << " and value is: " << anything[i] << endl;
//   }
//   return 0;
// }


// int main(){
//   int sum = 0;
//   string anything = "";
//   cout << "Please provide your country name: " << endl;
//   cin >> anything;

//   cout << "The length of anything is : " << anything.length() << endl;

//   int i = anything.length() - 1;
//   do{
//     cout << "Value of index " << i << " and value is: " << anything[i] << endl;
//     i/=2;
//   } while(i > 0);
//   return 0;
// }

