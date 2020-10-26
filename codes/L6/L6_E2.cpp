/**
Lecture 6 :          Selection Structure
Example :            Example - 2 
Problem Statement :  Example - 1 using Compound Condition instead of nested selection structure
Language :           C++
Coder :              Shahpar Islam
*/

/**
Pseudocode:

1. Take car type and membership info as user input
2. Check the condition
3. Display the daily fee for different combinations of car type and membership

Algorithm:

1. Declare variable : dailyFee = 55, carType, memberStatus
2. User input : carType. memberShip
3. Check : if (carType == Luxury) && (membership == yes)
    5. Add $20 with dailyFee
6. else
    7. Add $30 with dailyFee
8. Display the daily fee for the car

 */

#include <iostream>
using namespace std;

string to_lower(string &variableName){
  for(int i=0; i<sizeof(variableName); i++){
    variableName[i] = tolower(variableName[i]);
  }
  return variableName;
}

string to_upper(string &variableName){
  for(int i=0; i<sizeof(variableName); i++){
    variableName[i] = toupper(variableName[i]);
  }
  return variableName;
}

int main() {
  int dailyFee = 55;
  string memberStatus = "";
  string carType = "";

  cout << "What type of car do you want?(Luxury/Standard)" << endl;
  cin >> carType;
  cout << "Selected car type: " << carType << endl;

  cout << "Are you a member?(Yes/No)" << endl;
  cin >> memberStatus;
  cout << "Current member: " << memberStatus << endl; 

  if( (to_upper(carType) == "LUXURY") && (to_lower(memberStatus) == "yes") ) {
    dailyFee += 20;
  }else{
    dailyFee += 30;
  }

  cout << "Daily Fee for your car will be: " << dailyFee << endl;

}
